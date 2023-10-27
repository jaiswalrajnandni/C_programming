//C program to calculate the square root of a given number.
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    double result;
    printf("Program to calculate Square Root of given number\n");
    printf("Enter the number: ");
    scanf("%d",&n);
    result=sqrt(n);
    printf("Square of %d = %.2f",n,result);
}