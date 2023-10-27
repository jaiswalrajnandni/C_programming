//C program to calculate the cube of a given number.
#include<stdio.h>
int main(){
    int n,cube;
    printf("Program to calculate Cube of given number\n");
    printf("Enter the number: ");
    scanf("%d",&n);
    cube=n*n*n;
    printf("Square of %d = %d",n,cube);
}