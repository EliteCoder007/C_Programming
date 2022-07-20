#include<stdio.h>

int main(){
    int n,i = 2,  prime = 1;
    printf("Enter the value of n : \n");
    scanf("%d", &n);

    while(i < n){
        i++;
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