#include<stdio.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

void printInfo(struct student s1);

int main(){
    struct student s1 = {102, 3.25, "Nafiza"};

    printInfo(s1);

    return 0;
}
void printInfo(struct student s1){
    printf("student Information : \n");

    printf("student.roll = %d\n", s1.roll);
    printf("student.name = %s\n", s1.name);
    printf("student.cgpa = %f\n", s1.cgpa);


}