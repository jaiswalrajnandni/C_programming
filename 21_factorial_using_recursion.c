//C program to calculate factorial using recursion.
#include<stdio.h>
int factorial(int n){
    if(n==0)
      return 1;
    else
      return(n*factorial(n-1)); 
}
int main(){
    int n,t;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,factorial(n));
    return 0;
}