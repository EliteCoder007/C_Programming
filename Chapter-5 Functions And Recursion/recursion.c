#include<stdio.h>

void HW(int count);

int main(){
    HW(10);

    return 0;
}

//recursive function;
void HW(int count){

    if(count == 0){
        return;
    }
    printf("Hello World \n");
    HW(count - 1);
}