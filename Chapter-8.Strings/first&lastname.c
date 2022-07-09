#include<stdio.h>
//changing on EliteCoder....
void printFullName(char arr[]);

int main(){
    char firstName[] = "Nafiza";
    char lastName[] = "Khanom";

    printFullName(firstName);
    printFullName(lastName);

    return 0;
}

void printFullName(char arr[]){
    for(int i = 0; arr[i] != '\0' ;i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}