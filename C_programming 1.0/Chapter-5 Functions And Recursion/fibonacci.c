#include<stdio.h>

int fibonacci(int num);

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    int ans = fibonacci(num);
    printf("The fibonacci series of %d is %d \n", num, ans);

    return 0;
}

int fibonacci(int num){
    //base condition
   
        if(num == 0){
            return 0;
        }
        if(num == 1){
            return 1;
        }

    int fibNm1 = fibonacci(num - 1);
    int fibNm2 = fibonacci(num -2); 
    int fibN = fibNm1 + fibNm2;

    return fibN;
}