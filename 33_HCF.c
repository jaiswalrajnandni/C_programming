//C program to calculate HCF or GCD of given two number.
#include<stdio.h>

int main(){
    int n1,n2,hcf;
    printf("Program to find HCF of two numbers\n");
    printf("Enter the first number: ");
    scanf("%d",&n1);
    printf("Enter the second number: ");
    scanf("%d",&n2);
    for(int i=1; i<=n1 && i<=n2; ++i){
        if(n1%i==0 && n2%i==0)
          hcf = i;
    }
    printf("HCF of number %d and %d is %d",n1,n2,hcf);
    return 0;
}