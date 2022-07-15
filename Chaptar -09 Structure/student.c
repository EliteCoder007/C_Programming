#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    s1.roll = 2102002;
    s1.cgpa = 3.25;
    //s1.name = "EliteCoder";
    strcpy(s1.name,"EliteCoder");

    printf("Student name = %s\n",s1.name);
    printf("Student roll no = %d\n",s1.roll);
    printf("Student CGPA = %f\n", s1.cgpa);

    printf("\n");

    struct student s2;
    s2.roll = 2102017;
    s2.cgpa = 3.50;
    //s1.name = "EliteCoder";
    strcpy(s2.name,"RafiJakir");

    printf("Student name = %s\n",s2.name);
    printf("Student roll no = %d\n",s2.roll);
    printf("Student CGPA = %f\n", s2.cgpa);

    printf("\n");

    struct student s3;
    s3.roll = 21020060;
    s3.cgpa = 3.25;
    //s1.name = "EliteCoder";
    strcpy(s3.name,"Nanita");

    printf("Student name = %s\n",s3.name);
    printf("Student roll no = %d\n",s3.roll);
    printf("Student CGPA = %f\n", s3.cgpa);

    return 0;
}