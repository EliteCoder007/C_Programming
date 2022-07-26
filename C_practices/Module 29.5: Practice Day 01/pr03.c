// Write a C code which takes an array of size N as input and do the following:
// Print the values of even indexes. Index of that array starts from 1.

// For example:
// Input:
// 5
// 5 12 3 4 9
// Output:
// 12 4

#include<stdio.h>
int main()
{
        int n;
        scanf("%d",&n);
        int arr[n+1];
        for(int i=1;i<=n;i++)
        {            scanf("%d",&arr[i]);
        }
        for(int i=1;i<=n;i++)
        {
        if(i%2==0)
         printf("%d",arr[i]);
        }
        printf("\n");
}
