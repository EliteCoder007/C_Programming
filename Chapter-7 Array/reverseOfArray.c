#include<stdio.h>

void ReverseOfArray(int arr[], int n);
void PrintReverseOfArray(int arr[], int n);

int main(){
    int n;
    printf("Enter the terms of array : ");
    scanf("%d", &n);

    int arr[n];

    ReverseOfArray(arr, n);
    PrintReverseOfArray(arr, n);


    return 0;
}

void PrintReverseOfArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d \t",arr[i]);
    }
    printf("\n");
}

void ReverseOfArray(int arr[], int n){

    printf("Enter Random Numbers : ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < (n/2); i++){
        int firstVal = arr[i];
        int secondVal = arr[n-i-1];
        arr[i] = secondVal;
        arr[n-i-1] = firstVal;
    }
    
    
    

}