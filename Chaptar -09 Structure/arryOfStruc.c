#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student CSE[100]; 
    CSE[0].roll = 1;
    CSE[0].cgpa = 2.50;
    //scanf("%f",&CSE[0].cgpa);
    strcpy(CSE[0].name, "Elitecoder");

    printf("Name = %s\n",CSE[0].name);
    printf("Roll = %d\n",CSE[0].roll);
    printf("CGPA = %f\n",CSE[0].cgpa);


    return 0;
}