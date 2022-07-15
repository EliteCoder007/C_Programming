#include<stdio.h>

struct student { 
    int roll;
    char name [100];
    float cgpa;
};

int main(){
    struct student s1 = {1002, "EliteCoder", 3.25};
    printf("Student roll = %d\n", s1.roll);
    
    return 0;
}