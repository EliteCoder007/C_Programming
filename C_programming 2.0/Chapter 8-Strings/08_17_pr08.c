#include<stdio.h>

int occurance(char *st, char c);

int main(){
    char st[] = "Eliteee";
    int count = occurance(st, 'e');
    printf("Occurances = %d", count);
    
    return 0;
}

int occurance(char *st, char c){
    char *ptr = st;
    int count = 0;
    for(int i = 0; *ptr != '\0'; i++){
        if(*ptr == c){
            count++;
        }
        
        ptr++;
    }
    return count;
}