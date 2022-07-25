#include<stdio.h>

char str_cpy(char *target, char *source);

int main(){
    char source[] = "Elite";
    char target[10];

   char copy =  str_cpy(target, source);
   printf("%s", target);


    return 0;
}

char str_cpy(char *target, char *source){
    for(int i = 0; i < 10; i++){
        target[i] = source[i];
    }
}