#include<stdio.h>

int countVowels(char str[]);

int main(){
    char str[100];
    printf("Enter Any Word : ");
    fgets(str,100,stdin);


    int count = countVowels(str);
    printf("%d",count);


    return 0;
}

int countVowels(char str[]){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == 'A'||str[i] == 'E'||str[i] == 'I'||str[i] == 'O'||str[i] == 'U'||str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u'){
            count++;
        }
    }
    return count;
}