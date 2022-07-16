#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Student.txt", "w");

    char name[100];
    printf("enter name : ");
    scanf("%s", name);

    int age;
    printf("enter age : ");
    scanf("%d", &age);

    float cgpa;
    printf("enter cgpa : ");
    scanf("%f", &cgpa);

    fprintf(fptr, "student name :  %s\n", name);
    fprintf(fptr, "student age : %d\n", age);
    fprintf(fptr, "stduent cgpa : %f", cgpa);

    fclose(fptr);

    return 0;
}