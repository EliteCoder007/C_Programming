#include<stdio.h>

int main(){
    //1st case........
    // int age = 20;
    // int *ptrage = &age;
    // printf("ptrage = %u \n", ptrage);
    // ptrage++;
    // printf("ptrage = %u \n", ptrage);
    // ptrage--;
    // printf("ptrage = %u \n", ptrage);

    //2nd case...........
    // float age = 20;
    // float *ptrage = &age;
    // printf("ptrage = %u \n", ptrage);
    // ptrage++;
    // printf("ptrage = %u \n", ptrage);
    // ptrage--;
    // printf("ptrage = %u \n", ptrage);
    
    //3rd case........
    // char age = '*';
    // char *ptrage = &age;
    // printf("ptrage = %u \n", ptrage);
    // ptrage++;
    // printf("ptrage = %u \n", ptrage);
    // ptrage--;
    // printf("ptrage = %u \n", ptrage);

    //subtraction &comparision of two pointer is allowed.....
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("Difference = %u \n", ptr- _ptr);
    _ptr = &age;
    printf("Comparision = %u \n", ptr == _ptr);

    return 0;
}