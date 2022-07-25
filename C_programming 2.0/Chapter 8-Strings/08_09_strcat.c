#include<stdio.h>
#include<string.h>

int main(){
    char st1[100] = "EliteCoder";
    char st2[] = "/learner";
    strcat(st1, st2);
    printf("Now the st1 is %s", st1);

    return 0;
}