#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    // for(int i = 0; i < n; i++){
    //     int temp;
    //     temp = arr[i];
    //     arr[i] = arr[n-i-1];
    //     arr[n-i-1] = temp;
    //     printf("%d ", arr[i]);
    // }
    for(int i = (n - 1); i >= 0; i--){
        printf("%d ", arr[i]);
    }

    return 0;
}