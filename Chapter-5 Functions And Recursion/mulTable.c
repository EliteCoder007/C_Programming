#include<stdio.h>

void Multitable(int number);

int main(){
    int number;
    printf("Enter a Number to create it's Multiplication Table : ");
    scanf("%d", &number);
     
    Multitable(number);//argument/actual parameter

  
    return 0;
}
void Multitable(int number){//parameter/formal parameter
    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d \n", number, i, number * i);
    }
}