#include<stdio.h>
//bug--->Segmentation fault...........
int sum_of_n_natural_numbers(int n);

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = sum_of_n_natural_numbers(n);
    printf("The sum from 0 to n is : %d\n", sum);
    
    return 0;
}

int sum_of_n_natural_numbers(int n){
    int sum;
    if(n == 1){
        return 1;
    }
    else{
    sum = sum_of_n_natural_numbers(n - 1) + sum_of_n_natural_numbers(n);

    return sum;
    }
}