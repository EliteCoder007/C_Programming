#include<stdio.h>

int fibonacci(int n);

int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    int fib = fibonacci(n);
    printf("Fibonacchi eries from 0 to n is : %d\t",fib);
    
    return 0;
}

int fibonacci(int n){
    int fib;
    if(n == 1){
        return 0;
    }
    else if(n == 2){
        return 1;
    }
    else{
        fib = fibonacci(n-1) + fibonacci(n-2);
    }
    return fib;
}