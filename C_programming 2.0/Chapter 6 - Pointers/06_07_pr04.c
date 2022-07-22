#include<stdio.h>

int SumAndAverage(int a, int b, int *sum, float *avg);

int main(){
    int num1, num2;
    printf("Enter  a number: ");
    scanf("%d", &num1);

    printf("Enter  another number: ");
    scanf("%d", &num2);

    int sum;
    float average;
    SumAndAverage(num1, num2, &sum, &average);
    printf("Sum is %d and Average is %f\n", sum, average);

    return 0;
}

int SumAndAverage(int a, int b, int *sum, float *avg){
    *sum = a + b;
    *avg= (float)(*sum) / 2;
}
