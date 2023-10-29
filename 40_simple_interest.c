//C program to calculate simple interest with explanation
#include<stdio.h>
int main(){
    float SI,p,t,r;
    printf("Program to Calculate Simple Interest\n");
    printf("Enter Principle Amount: ");
    scanf("%f", &p);
    printf("Enter Time: ");
    scanf("%f", &t);
    printf("Enter Rate: ");
    scanf("%f", &r);
    SI = (p*t*r)/100;
    printf("Simple Interest: %.2f",SI);
    return 0;
}