#include<stdio.h>

void hello();
void goodbye();

int main(){
    hello();
    goodbye();
    hello();

    return 0;
}

void hello(){
    printf("Hello \n");
}

void goodbye(){
    printf("Good Bye \n");
}