#include<stdio.h>
#include<string.h>

int main(){
    char firstStr[50];
    printf("Enter first string : ");
    fgets(firstStr, 50, stdin);

    char secondStr[50];
    printf("Enter second string : ");
    fgets(secondStr, 50, stdin);

    int compare = strcmp(firstStr,secondStr);
    printf("%d",compare);


    return 0;
}