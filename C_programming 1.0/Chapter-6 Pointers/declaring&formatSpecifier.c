#include<stdio.h>

int main(){
    int age = 20; 
    int *ptrage = &age;
    printf("%p \n", &age);//adress
    printf("%u \n", &age);//porar subidharthe unsigned int;

    printf("%p \n", ptrage);
    printf("%u \n",ptrage);

    printf("%p \n", &ptrage);
    printf("%u \n", &ptrage);

    //3 lines are same:
    printf("%d \n",age);//1
    printf("%d \n", *ptrage);//2
    printf("%d \n", *(&age));//3


    char star = '*';
    char *ptrstar;

    float price = 10.33;
    float *ptrprice;



    return 0;
}