#include<stdio.h>

float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float a, float b);

int main(){

    float a = 5, b = 10;
    printf("Area of the Rectangle is : %f", rectangleArea(a, b));
    //baki gulao same;

    return 0;
}
float squareArea(float side){
    return side * side;
}

float circleArea(float radius){
    return 3.1416 * radius;
}

float rectangleArea(float a, float b){
    return a * b;
}