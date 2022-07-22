#include<stdio.h>
//test and done...
void wrongTenTimes(int x);

int main(){
    int a = 5;
    wrongTenTimes(a);
    printf("WrongTenTimes = %d",a);

    
    return 0;
}

void wrongTenTimes(int x){
    x *= 10;
}