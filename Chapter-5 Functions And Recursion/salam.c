#include<stdio.h>

void Assalamualikum();
void Bonjour();

int main(){
    printf("Enter B for Bangladeshi & F for French : ");
    char ch;
    scanf("%c", &ch);

    if(ch == 'B'){
        Assalamualikum();
    }else {
        Bonjour();
    }
    // Assalamualikum();

    return 0;
}

void Assalamualikum(){
    printf("Asslamualikum \n");
    // Bonjour();
} 

void Bonjour(){
    printf("Bonjour \n");
}