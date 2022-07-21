#include<stdio.h>

int factorial(int x);

int main(){
    int a;
    printf("Enter a number :");
    scanf("%d",&a);

    int factorial_of_num = factorial(a);

    printf("The value of factorial %d is %d\n",a, factorial_of_num);
    
    return 0;
}

int factorial(int x){
    printf("Calling factorial (%d)\n", x);
    
    if(x == 1 || x == 0){
        return 1;
    }
    else{
        return x * factorial(x-1);
    }
}