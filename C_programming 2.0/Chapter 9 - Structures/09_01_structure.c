#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

int main(){
    struct employee e1;
    e1.code = 101;
    e1.salary = 30000.0;
    strcpy(e1.name, "EliteLearner");

    printf("%d\n", e1.code);
    printf("%.1f\n", e1.salary);
    printf("%s\n", e1.name);
    return 0;
}