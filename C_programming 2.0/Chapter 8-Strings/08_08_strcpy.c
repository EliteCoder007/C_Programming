#include<stdio.h>
#include<string.h>

int main(){
    char *st = "EliteCoder";
    char st2[strlen(st)];
    strcpy(st2, st);
    printf("Now the st2 is %s", st2);

    return 0;
}