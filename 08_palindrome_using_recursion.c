//Write a program in C to check whether a number is palindrome or not using recursion.
#include<stdio.h>
int isPalindrome(int n);
int reverse(int n);
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(isPalindrome(n)==1)
      printf("Number is Palindrome.");
    else
      printf("Number is not Palindrome.");  
    return 0;
}
int isPalindrome(int n){
  if(n == reverse(n)){
    return 1;
  }
  return 0;
}
int reverse(int n){
  int rem;
  static int sum = 0;
  if(n != 0){
    rem = n%10;
    sum = sum*10 + rem;
    reverse(n/10);
  } 
  else
    return sum;
  return sum;  
}