#include<stdio.h>

void printGoodMorning();
void printGoodAfternoon();
void printGoodNight();

int main(){

    printf("*** Wishes ***\n");

    printGoodMorning();
    printGoodAfternoon();
    printGoodNight();
    
    return 0;
}

void printGoodMorning(){
    printf("Good Morning EliteCoder\n");
}

void printGoodAfternoon(){
    printf("Good Afternoon EliteCoder\n");
}

void printGoodNight(){
    printf("Good Night EliteCoder\n");
}