//Write a program in C to find the average of number using while loop with explanation.
#include<stdio.h>

int main(){
    int n,i=1;
    float num,sum=0,average;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(i<=n){
       printf("Enter the %d number: ",i);
       scanf("%f",&num);
       sum += num;
       i++;
    }
    average = sum/n;
    printf("\nTotal Average is = %1.2f\n ",average);  
    return 0;
}