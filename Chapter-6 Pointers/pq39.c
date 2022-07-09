#include<stdio.h>
// //call by value......
// void printAddress(int n);

//call by referrence.....
void _printAddress(int *n);

int main(){
    int n = 4;

    // printf("adress of n is : %u \n", &n);
    // printAddress(n);

    _printAddress(&n);
    printf("adress of n is : %u \n", &n);

    
    return 0;
}
// //call by value
// void printAddress(int n){
//     printf("adress of n is : %u \n", &n);
// }

//call by referrence.....
void _printAddress(int *n){
    printf("adress of n is : %u \n", n);
}