//Write a program in C to find sum of digits of a number using recursion.
#include<stdio.h>
int sumOfDigits(int n){
    int r;
    static int sum=0;
    sum = sum+(n%10);
    r = n/10;
    if(r != 0){
       sumOfDigits(r);
    }
    return sum;
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Sum of digit: %d",sumOfDigits(n));
    return 0;
}