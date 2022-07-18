#include<stdio.h>
#include<string.h>

int main(){
    char oldstr[] = "Elite";
    char newstr[] = "Coder";
    strcpy(newstr, oldstr);
    puts(newstr);

    return 0;
}