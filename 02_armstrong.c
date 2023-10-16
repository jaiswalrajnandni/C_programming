//Write a program in c to check whether an integer is Armstrong number or not.
#include<stdio.h>
int main(){
    int n,rem,sum=0,temp;
    printf("Enter three digit number: ");
    scanf("%d",&n);
    temp=n;
    while(n != 0){
        rem = n%10;
        sum = sum + (rem*rem*rem);
        n = n/10;
    }
    if(temp==sum)
       printf("Number is Armstrong.");
    else
       printf("Number is not Armstrong.");
    return 0;      
}