#include<stdio.h>

int main(){
    int input[5];
    int n_positive_integers = 0;

    printf("Enter some numbers: ");

    for(int i = 0; i < 5; i++){
    scanf("%d", &input[i]);
    }

    for(int i = 0; i < 5; i++){
        if(input[i] > 0){
            n_positive_integers++;
        }
    }
    printf("You entered %d positive integers", n_positive_integers);
    
    return 0;
}