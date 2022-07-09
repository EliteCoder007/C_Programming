#include<stdio.h>

int main(){
    int x = 4 + 9 * 10;
    printf("%d \n", x);

    //if same precedece then associativity(left to right);
    int y = 4 * 3 / 6 * 2;
    printf("%d \n", y);
    
    //practice
    int a = 5 * 2 - 2 * 3;
    int b = 5 * 2 / 2 * 3;
    int c = 5 *(2 / 2)* 3;
    int d = 5 + 2 / 2 * 3;

    printf("a---> %d , b---> %d , c---> %d , d---> %d \n", a, b, c, d);

}