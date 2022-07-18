#include<stdio.h>

int sum(int num1, int num2);

int main(){
    int num1, num2;
    printf("Enter First Number : ");
    scanf("%d", &num1);
    printf("Enter Seconf Number : ");
    scanf("%d", &num2);

    int s = sum( num1, num2);
    printf("Sum is : %d", s);

    return 0;
}

int sum(int num1, int num2){
    return num1 + num2;
}