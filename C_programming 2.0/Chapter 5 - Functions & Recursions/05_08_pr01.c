#include<stdio.h>

float average(int a, int b, int c);

int main(){
    int num1;
    printf("Enter First num : ");
    scanf("%d", &num1);
    
    int num2;
    printf("Enter Second num : ");
    scanf("%d", &num2);

    int num3;
    printf("Enter Third num : ");
    scanf("%d", &num3);
    
    int average_of_those_num = average(num1, num2, num3);
    printf("The average of three number is %d\n", average_of_those_num);

    return 0;
}

float average(int a, int b, int c){
    float average_of_abc = (float)(a + b + c) /3;
    return average_of_abc;
}