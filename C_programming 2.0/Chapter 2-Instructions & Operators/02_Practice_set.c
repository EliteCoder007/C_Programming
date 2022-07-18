#include<stdio.h>

int main(){
    // Q1.
    // int a; b=a;Wrong...
    int a;
    int b = a;//legal
    int v = 3^3;//valid but it is not exponential...
   // char dt = '18 Jul 2022'; Wrong...
    
    
    // Q2.
    float d = (3.0 / 8 - 2);
    printf("%f\n", d);


    //Q3.Write a program to determine wheather a number is divisible by 97 or not;
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    printf("Divisibility test returns: %d\n", num % 97);

    //Q4.Step by step evalution of 3*x/y-z+k;
    int x = 2, y = 3, z = 3, k = 1;
    int result = 3 * x / y - z + k;
    //6/3-3+1
    //2-3+1
    //-1+1
    //0
    printf("The value of result is %d",result);


    // Q5.
    // (3.0 + 1)--->floating point num.



    return 0;
}