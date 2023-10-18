//Write a C program to find prime factors of a given number
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Prime factors of a given number : ");
    while(n%2==0){
        printf("%d, ",2);
        n = n/2;
    }
    for(int i=3; i<=sqrt(n); i=i+2){
        while(n%i==0){
            printf("%d,",i);
            n = n/i;
        }
    }
    if(n>2){
        printf("%d, ",n);
    }
    return 0;
}