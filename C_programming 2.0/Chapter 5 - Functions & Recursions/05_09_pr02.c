#include<stdio.h>

float celsiusTofahrenheit(float celsius);

int main(){
    float celsius;
    printf("Enter Temperature in Celsius : ");
    scanf("%f", &celsius);

    float fahrenheit = celsiusTofahrenheit(celsius);
    printf("Temperature in Fahrenheit is  : %f\n", fahrenheit);
    
    return 0;
}

float celsiusTofahrenheit(float celsius){
    float fahrenheit;
    fahrenheit = ((celsius * (9/5) + 32));

    return fahrenheit;
}