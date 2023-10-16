//Write a program in c to check whether an integer is Armstrong number or not for any number.
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
    int n,rem,sum=0,temp,num,i=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    temp=n;
    num=n;
    while(n != 0){
         n = n/10;
         i++;
    }
    while(num != 0){
        rem = num%10;
        sum = sum + pow(rem,i);
        num = num/10;
    }
    if(sum==temp)
       printf("Number is Armstrong.");
    else
       printf("Number is not Armstrong.");
    return 0;
}