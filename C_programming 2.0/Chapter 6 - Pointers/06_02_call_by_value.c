#include<stdio.h>

int sum(int a, int b);

int main(){
    int x = 4, y = 6;
    printf("The value of x and y is %d and %d\n", x, y);
    printf("The value of 4 + 6 is %d\n", sum(x, y));
    printf("The value of a and b after function call is %d and %d\n", x, y);
    return 0;
}
int sum(int a, int b){
    int c;
    c = a + b;

    //no effect no change because it's call value  and here argument copy passes not actual one...
    a = 3434;
    b = 23432;

    return c;
}