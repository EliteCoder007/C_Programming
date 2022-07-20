#include<stdio.h>

int main(){
    int i = 10,sum = 0;
    while(i>0){
        sum+=i;
        i--;
    }
    printf("The sum is : %d", sum);
    return 0;
}