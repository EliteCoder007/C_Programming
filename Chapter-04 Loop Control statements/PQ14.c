#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of n : ");
    scanf("%d", &n);

    // int i=0;
    // while(i <= n){
    //     printf("%d \n", i);
    //     i++;
    // }

    for(int i=0; i<=n; i++){
        printf("%d\n", i);
    }

 
    return 0;
    
}