#include<stdio.h>
#include<string.h>

struct employee{
    char name[15];
    int code;
    float salary;
};

int main(){
    struct employee EliteCoder = {"Elite Coder", 100, 34.23};

    printf("name is: %s \n", EliteCoder.name);
    printf("code is: %d \n", EliteCoder.code);
    printf("salary is: %.2f \n", EliteCoder.salary);
    return 0;
}