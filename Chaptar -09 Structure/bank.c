#include<stdio.h>
#include<string.h>

typedef struct BankAccount{
   int accountNo; 
   char name[100];
    
}acc;

int main(){
    acc acc1 = {123, "Elite"};
    acc acc2 = {258, "Coder"};

    printf("acc no = %d\n", acc1.accountNo);
    printf("name = %s", acc1.name);

    return 0;
}