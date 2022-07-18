#include<stdio.h>
#include<string.h>

typedef struct address {
    int houseNO;
    int block;
    char city[100];
    char state[100];
}add;

void printAdd(add Ofpeople);

int main(){
    add Ofpeople[5];
    //input
    printf("Enter info for person 1 : ");
    scanf("%d", &Ofpeople[0].houseNO);
    scanf("%d", &Ofpeople[0].block);
    scanf("%s", Ofpeople[0].city);
    scanf("%s", Ofpeople[0].state);

    printf("Enter info for person 2 : ");
    scanf("%d", &Ofpeople[1].houseNO);
    scanf("%d", &Ofpeople[1].block);
    scanf("%s", Ofpeople[1].city);
    scanf("%s", Ofpeople[1].state);

    printf("Enter info for person 3 : ");
    scanf("%d", &Ofpeople[2].houseNO);
    scanf("%d", &Ofpeople[2].block);
    scanf("%s", Ofpeople[2].city);
    scanf("%s", Ofpeople[2].state);

    printf("Enter info for person 4 : ");
    scanf("%d", &Ofpeople[3].houseNO);
    scanf("%d", &Ofpeople[3].block);
    scanf("%s", Ofpeople[3].city);
    scanf("%s", Ofpeople[3].state);

    printf("Enter info for person 5 : ");
    scanf("%d", &Ofpeople[4].houseNO);
    scanf("%d", &Ofpeople[4].block);
    scanf("%s", Ofpeople[4].city);
    scanf("%s", Ofpeople[4].state);

    printAdd(Ofpeople[0]);
    printAdd(Ofpeople[1]);
    printAdd(Ofpeople[2]);
    printAdd(Ofpeople[3]);
    printAdd(Ofpeople[4]);

    return 0;
}

void printAdd(add Ofpeople){
    printf("Adress is : %d, %d, %s, %s\n", Ofpeople.houseNO, Ofpeople.block, Ofpeople.city, Ofpeople.state);

}