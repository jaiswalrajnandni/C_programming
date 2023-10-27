//C program to print first n prime number.
#include<stdio.h>

int main(){
    int n,temp,temp1=1;;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Prime numbe Upto %d are \n",n);
    while(temp1 <= n){
        temp=0;
        for(int i=2; i<=(temp1/2); i++){
            if(temp1%i==0){
                temp=1;
                break;
            }
        }
        if(temp==0)
           printf("%d \n",temp1);
        temp1++;   
    }
    return 0;
}