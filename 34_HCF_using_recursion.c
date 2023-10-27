//C program to calculate HCF or GCD of given two number using recursion.
#include<stdio.h>
int hcf(int n1, int n2){
    if(n2==0)
       return n1;
    return hcf(n2, n1%n2);   
}
int main(){
    int n1,n2,maxNum;
    printf("Program to find HCF of two numbers\n");
    printf("Enter the first number: ");
    scanf("%d",&n1);
    printf("Enter the second number: ");
    scanf("%d",&n2);
    printf("HCF of number %d and %d is %d",n1,n2,hcf(n1,n2));
    return 0;
}