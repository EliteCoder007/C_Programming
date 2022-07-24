#include<stdio.h>

void printTable(int *mulTable, int *num, int n);
//                                                              ERROR..............
int main(){
    int n;
    printf("Enter how many multiplication table you want:");
    scanf("%d",&n);

    printf("Enter those numbers: ");
    int n_mull[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &n_mull[i]);
        }
    

    int how_much;
    printf("Enter the end number you want to multiply with numbers:");
    scanf("%d", &how_much);
    int mulTable[n][how_much];

    printTable(mulTable, n_mull, how_much);
    return 0;
}

void printTable(int *mulTable, int *num, int n){
    printf("The multiplication table  of %d is : \n", *num);
    for(int i = 0; i < n; i++){
        mulTable[i] = (int)num * (i+1);
    }
    for(int i = 0; i < n; i++){
        printf("%dx%d = %d\n", *num, i+1, mulTable[i]);
    }
    printf("****************************\n\n");
}