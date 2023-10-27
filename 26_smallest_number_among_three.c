//C program to find Smallest number among three.
#include<stdio.h>

int main(){
    int first, second, third;
    printf("Enter the First number: ");
    scanf("%d",&first);
     printf("Enter the Second number: ");
    scanf("%d",&second);
    printf("Enter the third number: ");
    scanf("%d",&third);
    if((first <= second)&&(first <= third))
        printf("%d is the Smallest Number",first);
    if((second <= first)&&(second < third))
        printf("%d is the Smallest Number",second);
    if((third <first)&&(third < second))
        printf("%d is the Smallest Number",third);
}