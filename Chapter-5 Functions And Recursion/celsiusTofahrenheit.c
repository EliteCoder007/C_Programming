#include<stdio.h>

float convertTemp(float celsius);

int main(){
    float celsius;
    printf("Enter temperature in Celsius : ");
    scanf("%f", &celsius);

    float far = convertTemp(celsius);
    printf("%.3f degree celsius = %.3f degree fahrenheit", celsius, far);    


    return 0;
}

float convertTemp(float celsius){
    float far = celsius * (9.0/5.0) + 32;
    return far;
}