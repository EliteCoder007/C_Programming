//print the value 'i' from its pointer to pointer;
#include<stdio.h>

int main(){
    int i = 5;
    int *ptri = &i;
    int**pptri = &ptri;

    printf("%d \n", **pptri);
    
    return 0;
}