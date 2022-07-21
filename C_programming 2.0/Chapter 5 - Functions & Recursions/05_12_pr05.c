#include<stdio.h>

int main(){
    int a = 3;
    printf("%d %d %d", a, ++a, a++);//arguments passes right to left(<----) 3,4+1,5
    return 0;
}