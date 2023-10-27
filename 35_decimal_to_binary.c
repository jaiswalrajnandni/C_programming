//C program to convert Decimal number into Binary.
#include<stdio.h>
int main(){
    int num, arr[10],i,j;
    printf("Program to convert Decimal number into Binary\n");
    printf("Enter the Decimal number: ");
    scanf("%d",&num);
    printf("Binary Number of %d is = ",num);
    for(i=0; num>0; i++){
       arr[i] = num%2;
       num = num/2;
    }
    for(j=i-1; j>=0; j--)
        printf(" %d ", arr[j]);
    printf("\n");    
    return 0;
}