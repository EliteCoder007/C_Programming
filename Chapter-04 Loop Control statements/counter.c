#include<stdio.h>

int main(){
    //counter(i) can be float or even character;
    for (float i = 1.0; i <= 5.0; i++){
        printf("%f \n", i);
    }

    for(char ch ='a'; ch<='z';ch++){
        printf("%c \n", ch);
    }
    return 0;
    
}