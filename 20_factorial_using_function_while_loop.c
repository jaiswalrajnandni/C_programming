//C program to calculate factorial using function and while loop.
#include<stdio.h>
int factorial(int n){
    int fact=1,i=1;
    while(i <= n){
       fact = fact*i;
       i++;
    }
    return fact;
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,factorial(n));
    return 0;
}