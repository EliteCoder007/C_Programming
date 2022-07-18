#include<stdio.h>

int countOdd(int arr[], int n);

int main(){
    int n;
    printf("Enter the number of terms : ");
    scanf("%d", &n);

    int arr[n], count;

    count = countOdd(arr, n);
    printf("There are %d odd numbers", count);

    

    return 0;
}

int countOdd(int arr[], int n){
    
    int count = 0;

    printf("Enter Random Numbers : \n");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);

        if(arr[i] % 2 != 0){
            count++;
        }
    }

    return count;

    
    
}