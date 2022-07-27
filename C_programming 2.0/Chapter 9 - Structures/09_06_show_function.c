#include<stdio.h>
#include<string.h>

struct employee{
    char name[15];
    int code;
    float salary;
};

void show(struct employee e1);

int main(){
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    ptr->code = 101;
    ptr->salary = 11.01;
    strcpy(ptr->name, "EliteCoder");

    show(e1);
    
    return 0;
}

void show(struct employee e1){
    printf("The name of employee is : %s\n", e1.name);
    printf("The code of employee is : %d\n", e1.code);
    printf("The salary of employee is : %f\n", e1.salary);
}