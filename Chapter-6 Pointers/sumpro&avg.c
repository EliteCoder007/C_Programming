#include<stdio.h>

void doWork(int num1, int num2, int *sum, int *prod, int *avg);

int main(){
    int num1, num2;
    printf("Enter a number : ");
    scanf("%d", &num1);

    printf("Enter another number : ");
    scanf("%d", &num2);

    int sum, prod, avg;

    doWork(num1, num2, &sum, &prod, &avg);
    printf("sum = %d, prod = %d, avg = %d \n", sum, prod, avg);


    return 0;
}

void doWork(int num1, int num2, int *sum, int *prod, int *avg){
    *sum = num1 + num2;
    *prod = num1 * num2;
    *avg = (num1 + num2) / 2;
}