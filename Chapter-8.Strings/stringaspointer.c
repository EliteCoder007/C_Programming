#include<stdio.h>

int main(){
    char *canChange = "Elite Coder";
    puts(canChange);
    canChange = "Elite";
    puts(canChange);

    char cannotChange[] = "Elite Coder";
    puts(cannotChange);
    //cannotChange = "Elite";
    return 0;
}