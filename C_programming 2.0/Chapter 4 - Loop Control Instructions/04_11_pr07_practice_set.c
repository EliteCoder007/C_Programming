#include<stdio.h>

int main(){
    int multi_sum = 0, mul = 8;

    for(int i = 1; i <= 10; i++){
        mul *= i;
        printf("mul  = %d\n",mul);
        multi_sum += mul;
        mul = 8;
    }
    printf("Sum is %d\n", multi_sum);
    return 0;
}