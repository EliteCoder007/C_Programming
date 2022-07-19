#include<stdio.h>

int main(){
    int age;
    printf("Enter Your age\n");
    scanf("%d", &age);
    if(age>90 && age<18){
        printf("You cannot drive\n");
    }
    else{
        printf("You can drive\n");
    }

    if(age==50){
        printf("Half Century\n");
    }
    return 0;
}