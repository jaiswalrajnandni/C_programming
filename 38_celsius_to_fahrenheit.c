//C program to convert Celsius to Fahrenheit.
#include<stdio.h>
int main(){
    float celsius, fahreneit;
    printf("Program to convert Temperature from Celsius to Fahrenheit\n");
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahreneit = (celsius * 9 / 5) + 32;
    printf("%.2f Celsius = %.2f Fahrenheit",celsius,fahreneit);
    return 0;
}