//C program to calculate the power without using POW method.
#include<stdio.h>
int main(){
    int base,exp,result=1;
    printf("Program to calculate Power of given number\n");
    printf("Enter the base: ");
    scanf("%d",&base);
    printf("Enter the exponent: ");
    scanf("%d",&exp);
    for(int i=1; i<=exp; i++){
        result = result*base;
    }
    printf("%d to the power %d is = %d",base,exp,result);
}