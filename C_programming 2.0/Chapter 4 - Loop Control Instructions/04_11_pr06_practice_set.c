#include<stdio.h>

int main(){
    int i = 1, sum = 0, n;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    // for(i = 1; i <= n; i++){
    //     sum += i;
    // }
    while(i<=n){
        sum+=i;
        i++;
    }
    printf("The value o sum(1 to n) is %d", sum);
    return 0;
}