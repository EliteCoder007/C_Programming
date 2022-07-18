#include<stdio.h>
//print the sum of First n Natural Numbers.
int main(){
    int n = 1;
    printf("enter number : ");
    scanf("%d", &n);

    int sum = 0;
    // for(int i=1, j=n; i<=n && j>=1; i++, j--){
    //     sum += i;
    //     // printf("%d \n",sum);
    //     printf("%d \n",j);
    // }
        for(int j=n; j>=1; j--){
        sum += j;
        // printf("%d \n",sum);
        printf("%d \n",j);
    }

    printf("Sum is %d \n", sum);

    // for(int i=n; i>=1; i--){
    //     printf("%d\n", i);
    // }


    

}