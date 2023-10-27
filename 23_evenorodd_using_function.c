//C program to check a given number is even or odd using function.
#include<stdio.h>
void EvenorOdd(int n){
    if(n%2==0)
       printf("Number is even");
    else
       printf("Number is odd");   
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    EvenorOdd(n);
    return 0;
}