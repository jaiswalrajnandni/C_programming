//C program to convert Fahrenheit to Celsius.
#include<stdio.h>
int main(){
    float celsius, fahreneit;
    printf("Program to convert Temperature from Fahrenheit to Celsius\n");
    printf("Enter temperature in Celsius: ");
    scanf("%f", &fahreneit);
    celsius = ((fahreneit-32)*5)/9;
    printf("%.2f Fahrenheit = %.2f Celsius",fahreneit,celsius);
    return 0;
}