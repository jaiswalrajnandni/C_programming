//C program to calculate the power using POW method.
#include<stdio.h>
#include<math.h>
int main(){
    int base,exp,result;
    printf("Program to calculate Power of given number\n");
    printf("Enter the base: ");
    scanf("%d",&base);
    printf("Enter the exponent: ");
    scanf("%d",&exp);
    result = pow(base, exp);
    printf("%d to the power %d is = %d",base,exp,result);
}