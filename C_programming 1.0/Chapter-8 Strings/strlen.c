#include<stdio.h>
#include<string.h>

int main(){
    char name[100];
    printf("Enter Your Name : ");
    fgets(name, 100, stdin);
    puts(name); 

    int len = strlen(name);
    printf("length is : %d", len-1);

    return 0;
}