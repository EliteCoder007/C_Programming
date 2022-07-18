#include<stdio.h>

int main(){
    int age;
    printf("Enter age : ");
    scanf("%d", &age);

    if(age > 18){
        printf("Adult \n");
        printf("You can vote \n");
        printf("You can drive \n");
    }
    else{
        printf("Not adult \n");
    }
    printf("Thank you \n");
    return 0;
}