#include<stdio.h>
//keep taking numbers as input from user untill user enterns an odd number.
int main(){
    int n;
    do{
          printf("Enter only Even Numbers : ");
        scanf("%d", &n);
        printf("%d\n", n);

        if(n % 2 != 0){
            break;
        }
    
        
    } while (1);
    printf("Thank you");
    
    

    return 0;
}