#include<stdio.h>

void checkChar(char str[], char ch);

int main(){
    char str[100];
    char ch;
    printf("Enter any Word : ");
    fgets(str, 100, stdin);

    printf("Enter the character you want to search in the Word : ");
    scanf("%c",&ch);

    checkChar(str,ch);

    return 0;
}

void checkChar(char str[], char ch){
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == ch){
            printf("Character is present");
            return;
        }
    }
    printf("Character is not present");
}