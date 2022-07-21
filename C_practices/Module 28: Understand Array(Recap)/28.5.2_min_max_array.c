#include<stdio.h>

int main(){
    int ar[6] = {2, 1, 0,-5, 10, 5};
    int min = ar[0], max = ar[0];
    for(int i = 1; i < 6; i++){
        int val = ar[i];
        if(val > max){
            max = val;
        }
        if(val < min){
            min = val;
        }
    }
    printf("min---> %d, max---> %d\n", min , max);
    return 0;
}