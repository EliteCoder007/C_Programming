#include<stdio.h>

void tenTimes(int *a);

int main(){
    int a = 5;
    tenTimes(&a);
    printf("a x 10 = %d",a);
    
    return 0;
}
void tenTimes(int *a){
    *a *= 10;
}