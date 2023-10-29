//C program to convert Decimal number into Octal.
#include<stdio.h>
int main(){
    int num, arr[10],i,j;
    printf("Program to convert Decimal number into Octal\n");
    printf("Enter the Decimal number: ");
    scanf("%d",&num);
    printf("Octal Number of %d is = ",num);
    for(i=0; num>0; i++){
       arr[i] = num%8;
       num = num/8;
    }
    for(j=i-1; j>=0; j--)
        printf(" %d ", arr[j]);
    printf("\n");    
    return 0;
}