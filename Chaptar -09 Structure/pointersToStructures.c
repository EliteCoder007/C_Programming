#include<stdio.h>

struct student{
    int roll;
    float cgpa;
    char name[100];

};

int main(){
    struct student s1 = {10, 3.35, "EliteCoder"};
    //rintf("Student roll = %d\n", s1.roll);

    struct student *ptr = &s1;
    //printf("Student roll = %d\n", (*ptr).roll);

    printf("student name = %s\n", ptr->name);
    printf("student roll = %d\n", ptr->roll);
    printf("student cgpa = %f\n", ptr->cgpa);


    return 0;
}