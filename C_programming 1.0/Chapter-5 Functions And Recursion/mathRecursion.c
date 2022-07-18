#include<stdio.h>
//sum of first n natural numbers.recursion

int sum(int num);

int main(){
    int num;
    printf("Enter a num : ");
    scanf("%d", &num);

    int sum_from_1st_n = sum(num);
    printf("Sum is %d",sum_from_1st_n);
    // printf("Sum is %d", sum(5));
    
    return 0;
}

int sum(int num){
    if(num == 1){
        return 1;
    }

    int sumN_1 = sum(num -1);//sum of 1 to num-1;
    int sumN = sumN_1 + num;
    return sumN;
}