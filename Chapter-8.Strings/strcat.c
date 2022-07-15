#include<stdio.h>
#include<string.h>

int main(){
    char firstname[50];
    printf("Enter First name : ");
    fgets(firstname, 50, stdin);
                                            //bugg ace ////////..........                
    char secondname[50];
    printf("Enter Your Second name : ");
    fgets(firstname, 50, stdin);

    char fullName[100];
    //strcpy(fullName,firstname);
    strcat(fullName, secondname);
    puts(fullName);

    return 0;
}