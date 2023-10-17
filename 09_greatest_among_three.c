//Write a program in C to find greatest among three integers.
#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the thired number: ");
    scanf("%d",&c);
    if(a>=b && a >=c)
        printf("a is greatest.");
    if(b>=a && b>=c)
        printf("b is greatest.");
    if(c>=a && c>=b)
        printf("c is greatest.");
    return 0;
}