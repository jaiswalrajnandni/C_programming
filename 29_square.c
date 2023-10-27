//C program to calculate the square of a given number.
#include<stdio.h>
int main(){
    int n,square;
    printf("Program to calculate Square of given number\n");
    printf("Enter the number: ");
    scanf("%d",&n);
    square=n*n;
    printf("Square of %d = %d",n,square);
}