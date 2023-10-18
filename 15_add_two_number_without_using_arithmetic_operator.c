//Write a program in c to add two integer without using arithmetic + operator.
#include<stdio.h>

int main(){
    int n1,n2;
    printf("Enter first integer: ");
    scanf("%d",&n1);
    printf("Enter second integer: ");
    scanf("%d",&n2);
    for(int i=1; i<=n2; i++)
       n1++;
    printf("Sum = %d",n1);   
    return 0;
}