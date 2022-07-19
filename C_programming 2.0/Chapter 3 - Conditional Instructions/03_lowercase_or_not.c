#include<stdio.h>

int main(){
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z'){
        printf("It is lowercase");
    }
    else{
        printf("It is not lowercase");
    }
    return 0;
}