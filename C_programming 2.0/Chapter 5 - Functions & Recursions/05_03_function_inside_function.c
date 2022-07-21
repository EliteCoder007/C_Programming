#include<stdio.h>

void printGoodMorning();
void printGoodAfternoon();
void printGoodNight();

int main(){

    printf("*** Wishes ***\n");

    printGoodMorning();  
    return 0;
}

void printGoodMorning(){
    printf("Good Morning EliteCoder\n");

    printGoodAfternoon();
}

void printGoodAfternoon(){
    printf("Good Afternoon EliteCoder\n");

    printGoodNight();
}

void printGoodNight(){
    printf("Good Night EliteCoder\n");
}