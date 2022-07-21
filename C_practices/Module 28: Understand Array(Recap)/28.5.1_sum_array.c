#include<stdio.h>

int main(){
    int ar[6] = {2, 1, 0, -5, 10, 5};
    int sum = 0;
    for(int i = 0; i < 6; i++){
        int val = ar[i];
        // printf("i---> %d, val---> %d\n", i, val);
        sum += val;
        
    }
    printf("%d\n", sum);
    return 0;
}