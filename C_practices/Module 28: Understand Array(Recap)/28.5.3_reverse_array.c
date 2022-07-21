#include<stdio.h>

int main(){
    int arr[6] = {2, 1, 0, -5, 10, 5};
    for(int i = 5; i >= 0; i--){
        printf("%d\n", arr[i]);
    }
    return 0;
}