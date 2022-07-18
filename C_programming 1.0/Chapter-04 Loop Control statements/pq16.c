#include<stdio.h>
//print the multiplication table of a number input by the user.
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    for(int i=1; i<=10; i++){
        printf("%d x %d = %d \n", n, i, n*i);
    }
    return 0;
}