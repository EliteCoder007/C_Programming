#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    // printf("%d", sizeof(arr) / sizeof(arr[0]));
    memset(arr, 5, sizeof(arr));
    for(int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}