#include<stdio.h>

int main(){
    //Prime Numbers = (A prime number is a whole number greater than 1 whose only factors are 1 and itself)

    //Disclaimer: This is not the best method to solve this problem;
    int n, prime = 1;
    printf("Enter the value of n : \n");
    scanf("%d", &n);

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            prime = 0;
            break;
        }
    }
    if(prime == 0){
        printf("This is not a prime number\n");
    }
    else{
        printf("This is a prime number\n");
    }
    return 0;
}