#include<stdio.h>
#include<string.h>

typedef struct Hajee_Mohammad_Danesh_Science_and_Technology_University{
    char faculty[100];
    int establish;
    char place[50];
}HSTU;

void printInfo(HSTU h1);

int main(){
    HSTU h1;
    strcpy(h1.place, "Dinajpur");
    h1.establish = 1999;
    strcpy(h1.faculty, "CSE,ENGG,DVM,AGRI");

    printInfo(h1);

    return 0;
}

void printInfo(HSTU h1){
    printf("Hajee Mohammad Danesh Science & Technology University\n");
    
    printf("Established :%d \n", h1.establish);
    printf("Place :%s \n", h1.place);
    printf("Faculties :%s \n", h1.faculty);

}