#include<stdio.h>
#include<string.h>

int main(){
    char st1[100] = "EliteCoder";
    char st2[] = "/learner";
    int val =  strcmp(st1, st2);
    printf("Now the val is %d", val);

    return 0;
}