//Write a program in C to check if a number is binary.
#include<stdio.h>

int main(){
    int j,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>0){
        j = n%10;
        if( j!=0 && j!=1){
            printf("Given number is not binary");
            break;
        }
        n = n/10;
        if(n == 0)
        printf("Given number is in binary");
    }
    return 0;
}