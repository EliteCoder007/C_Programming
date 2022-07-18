#include<stdio.h>

int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);

    if (number >= 0)
    {
        printf("Positive \n");

        if (number % 2 == 0)
        {
        
            printf("Even");
        }
        else
        {
            printf("Odd \n");
        } 

    }
    else
    {
        printf("Negative \n");

          if (number % 2 == 0)
        {
        
            printf("Even");
        }
        else
        {
            printf("Odd \n");
        } 

    }
    return 0;
    
    
}