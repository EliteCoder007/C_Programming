#include<stdio.h>

int main(){
    int mul[10];
    int mul_of;
    printf("***Enter the number by which you want to make Multilication Table***\n");
    scanf("%d",&mul_of);
    for(int i = 0; i < 10; i++){
        mul[i] = mul_of*(i+1);
    }


for(int i = 0; i < 10; i++){
        printf("%dx%d = %d\n",mul_of, i+1, mul[i]);
    }
    return 0;
}