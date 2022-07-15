#include<stdio.h>
#include<string.h>

void salting(char password[]);

int main(){
    char  password[100];
    printf("Enter Your Password : ");
    scanf("%s", password);

    salting(password);

    return 0;
}

void salting(char password[]){
    char salt[] = "123";
    char saltedPassword[200];
    strcpy(saltedPassword, password);
    strcat(saltedPassword, salt);
    printf("New Salted Password is %s", saltedPassword);

}
