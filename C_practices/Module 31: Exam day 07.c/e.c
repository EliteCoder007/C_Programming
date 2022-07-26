#include<stdio.h>

int main(){
    int num_of_5_digits;
    scanf("%d", &num_of_5_digits);

    int digit;
    int sum = 0;
    if(num_of_5_digits >= 10000 && num_of_5_digits <= 99999){
        
        for(int i = 0; i < 6; i++){
            digit = num_of_5_digits % 10;
            num_of_5_digits /= 10;
            sum += digit;
        }
        printf("%d",sum);
    }
    return 0;
}