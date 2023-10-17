//Write a program in C to check whether a number is palindrome or not using iteration.
#include<stdio.h>

int main(){
    int n,temp,rev=0,rem;
    printf("Enter the number: ");
    scanf("%d",&n);
    temp = n;
    while(n != 0){
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }
    if(temp==rev)
      printf("Number is Palindrome.");
    else
      printf("Number is not Palindrome.");  
    return 0;
}