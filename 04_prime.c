//Write a program in C to check given number is prime or not.
#include<stdio.h>

int main(){
    int n,flag=1;
    printf("Enter three digit number: ");
    scanf("%d",&n);
    if(n==0 || n== 1)
      flag=0;
    for(int i=2; i<=n/2; i++){
        if(n%i==0)
          flag=0;
    }  
    if(flag)
       printf("Prime Number");
    else
       printf("Not Prime Number");   
    return 0;
}