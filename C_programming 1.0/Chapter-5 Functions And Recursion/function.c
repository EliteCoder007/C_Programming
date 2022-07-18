#include<stdio.h>

void printHello();//declaration/prototype.

int main(){
    printHello();//function call
    printHello();
    printHello();

    return 0;
}

//function defination.
void printHello(){
    printf("Hello!\n");
    printf("My name is Hridoy\n");
}