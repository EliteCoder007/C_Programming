#include<stdio.h>
//recursion
int factorial(int num);

int main(){
    int num;
    printf("Enter a Number : ");
    scanf("%d", &num);

    int answer = factorial(num);
    printf("%d! = %d", num, answer);

    return 0;
}

int factorial (int num){
    if(num == 1){
        return 1;
    }

    int factNm_1 = factorial(num - 1);
    int factN = factNm_1 * num;
    return factN;
}