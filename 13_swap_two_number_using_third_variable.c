//Write a program in C to swap two numbers using third variable.
#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter the first number: ");
    scanf("%d",&n1);
    printf("Enter the second number: ");
    scanf("%d",&n2);
    n3 = n1;
    n1 = n2;
    n2 = n3;
    printf("After Swaping\nThe first number:%d \nThe second number:%d ",n1,n2);
    return 0;
}