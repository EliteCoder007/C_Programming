#include<stdio.h>

int strlen(char *st);

int main(){
    char st[] = "Elite";
    int len = strlen(st);
    printf("The length of this string is %d", len);

    return 0;
}
int strlen(char *st){
    char *ptr = st;
    int len = 0;
    while(*ptr != '\0'){
        len++;
        ptr++;
    }
    return len;
}