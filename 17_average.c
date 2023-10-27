//Write a program in C to find the average of number with explanation.
#include<stdio.h>

int main(){
    int n;
    float num,sum=0,average;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
       printf("Enter the %d number: ",i);
       scanf("%f",&num);
       sum += num;
    }
    average = sum/n;
    printf("\nTotal Average is = %1.2f\n ",average);  
    return 0;
}