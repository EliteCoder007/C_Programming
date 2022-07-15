#include<stdio.h>

int main(){
    char fullName[100];
    printf("Enter Your FullName : ");

    // gets(fullName);
    // puts(fullName);

    fgets(fullName, 100, stdin);
    puts(fullName);


    return 0;
}