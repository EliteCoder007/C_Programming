#include<stdio.h>

void printAddress(int a);

int main(){
    int i = 4;
    printf("The value of variable i is %d\n", i);

    printAddress(i);
    printf("The adress of variable i is %u\n", &i);
    return 0;
}
void printAddress(int a){
    printf("The value of variable a is %d\n", a);
    printf("The adressof varible a is %u\n", &a);
}
