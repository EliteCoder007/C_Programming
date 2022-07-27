#include<stdio.h>

struct employee{
    char name[15];
    int code;
    float salary;
};

int main(){
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    //(*ptr).code = 101; //or you can also write : ptr->code = 101;
    ptr->code = 101;
    printf("%d", e1.code);
    return 0;
}