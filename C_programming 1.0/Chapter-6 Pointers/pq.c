#include<stdio.h>

int main(){
    int x;
    int *ptrx;

    ptrx = &x;
    *ptrx = 0;

    printf("x = %d \n", x);//0
    printf("*ptrx = %d \n", *ptrx);//0

    *ptrx += 5;
    printf("x = %d \n", x);//5
    printf("*ptrx = %d \n", *ptrx);//5

    (*ptrx) ++;
    printf("x = %d \n", x);//6
    printf("*ptrx = %d \n", *ptrx);//6
    return 0;
}