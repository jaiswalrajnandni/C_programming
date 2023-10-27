//C program to print prime number in a given range.
#include<stdio.h>

int main(){
    int first, last, temp;
    printf("C Program to print Prime number in a given range\n");
    printf("Enter the number: ");
    scanf("%d",&first);
    printf("Enter the number: ");
    scanf("%d",&last);
    printf("Prime number between %d and %d are\n",first,last);
    while(first <= last){
        temp=0;
        for(int i=2; i<=(first/2); i++){
            if(first%i==0){
                temp=1;
                break;
            }
        }
        if(temp==0)
          printf("%d \n",first);
        first++;  
    }
}