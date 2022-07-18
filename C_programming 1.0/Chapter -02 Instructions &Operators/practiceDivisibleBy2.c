#include<stdio.h>

int main(){
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    printf("%d", x % 2 == 0);//even--->1;odd--->0
    return 0;
}