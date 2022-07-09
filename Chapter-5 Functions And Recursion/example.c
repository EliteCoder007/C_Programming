#include<stdio.h>

void calculatePrice(float value);

int main(){
    float value;
    printf("Enter Price : ");
    scanf("%f", &value);

    calculatePrice(value);
    printf("value is : %f", value);//Changes to parameters in function don't change the values in calling function because a copy of argument is passed to the function;

    return 0;
}

void calculatePrice(float value){
    value = value + (.18 * value);
    printf("Final price is : %f \n", value);
}