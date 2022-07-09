#include<stdio.h>

int main(){
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
     
    int factorial = 1;
    for(int i = n; i>=1; i--){

        factorial *= i;  
    }

    printf("%d! = %d \n", n, factorial);


    return 0;
}