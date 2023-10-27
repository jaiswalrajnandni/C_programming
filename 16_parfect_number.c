//Write a program in C to check given number is perfect or not
#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1; i<=n/2; i++){
        if(n%i==0){
            sum = sum+i;
        }
    }
    if(n==sum)
       printf("Perfect Number");
    else
      printf("Not Perfect Number");   
    return 0;
}