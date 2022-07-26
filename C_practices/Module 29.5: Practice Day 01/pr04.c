// Write a C code which takes an array of size N as input and do the following:
// Make reverse of that array and print the differences between every value of the original and reversed array.

// For example:
// Input:
// 5
// 1 4 6 2 7
// Output:
// 6 2 0 2 6

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d", &n);
//     int arr[n], rev[n];
//     for(int i = 0; i < n; i++){
//         scanf("%d", arr[i]);
//     }
//     rev[n] = strrev(arr);
//     for(int i = 0; i < n; i++){
//         int diff =rev[i] -  arr[i];
//         printf("%d ", &diff);
//     }
//     return 0;
// }
#include<stdio.h>

int main()
{
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }

        int reverseind=0;
        int rev[n];
      for(int i=n-1;i>=0;i--)
        {
             rev[reverseind]=arr[i]; 
             reverseind++; 
        }
        
        for(int i=0;i<n;i++)
        {
    int differ=rev[i]-arr[i];
                if(differ<0)
                {
                        differ=differ*(-1);
                }
                 printf("%d ",differ);
        }
        printf("\n");
}
