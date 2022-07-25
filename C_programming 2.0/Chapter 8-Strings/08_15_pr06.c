#include<stdio.h>

void encrypt(char *message);

int main(){
    char message[100];
    printf("Enter Your Message: ");
    fgets(message, 100,stdin );
    encrypt(message);
    printf("Your Encrypted Message is : %s", message);
    return 0;
}

void encrypt(char *message){
    char *ptr;
    ptr = message;
    for(int i = 0; *ptr != '\0'; i++){
        *ptr += 1;
        ptr++;
        
    }
}