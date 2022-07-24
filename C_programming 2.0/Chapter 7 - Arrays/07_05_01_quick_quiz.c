#include<stdio.h>

int main(){
    int i = 5;
    int *ptr = &i;
    printf("The value of ptr is %u\n", ptr);
    int diff1 = ptr;
    ptr++;
    printf("The value of ptr after addition is %u\n", ptr);

    int diff2 = ptr;

    printf("Integer needs %d bytes\n", diff2 - diff1);

    ptr--;
    printf("The value of ptr after substraction is %u\n", ptr);
    

    ptr++;
    printf("The value of ptr after addition is %u\n", ptr);
    return 0;
}