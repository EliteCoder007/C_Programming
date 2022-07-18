#include<stdio.h>

void square(int n);

int main(){
    int number = 4;
    square(number);
    printf("number = %d \n", number);
    
    return 0;
}
//call By value
void square(int n){
    n = n * n;
    printf("Square = %d \n", n);

}