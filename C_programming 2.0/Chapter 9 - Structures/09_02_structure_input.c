#include<stdio.h>
#include<string.h>

struct employee{
    char name[15];
    int code;
    float salary;
};

int main(){
    struct employee e1, e2, e3;
    printf("Enter the value for code of e1: ");
    scanf("%d", &e1.code);
    printf("Enter the value for salary of e1: ");
    scanf("%f", &e1.salary);
    printf("Enter the value for name of e1: ");
    scanf("%s", e1.name);

    printf("Enter the value for code of e2: ");
    scanf("%d", &e1.code);
    printf("Enter the value for salary of e2: ");
    scanf("%f", &e1.salary);
    printf("Enter the value for name of e2: ");
    scanf("%s", e1.name);

    printf("Enter the value for code of e3: ");
    scanf("%d", &e1.code);
    printf("Enter the value for salary of e3: ");
    scanf("%f", &e1.salary);
    printf("Enter the value for name of e3: ");
    scanf("%s", e1.name);
    
    return 0;
}