#include<stdio.h>

void printNumbers(int array[], int n);

int main(){
    int array[]={1,2,3,4,5,6};
    printNumbers(array, 6);
    

    return 0;
}

void printNumbers(int array[], int n){
    for(int i = 0; i < n; i++){
        printf("%d \t", array[i]);
    }
    printf("\n");
}