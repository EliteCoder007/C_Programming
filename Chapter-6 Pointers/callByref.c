#include<stdio.h>

void square(int n);
void _square(int *n);

int main(){
    int number = 4;
    square(number);
    printf("Number = %d \n", number);

    _square(&number);
    printf("Number = %d \n", number);
    
    return 0;
}
//copy change
void square(int n){
    n = n * n;
    printf("Square = %d \n", n);
}
//main adress ei man change.......
//call by refe
void _square(int *n){
    *n = (*n) * (*n);//4 * 4
    printf("Square = %d \n", *n);
}