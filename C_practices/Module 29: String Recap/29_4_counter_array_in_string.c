#include<stdio.h>
#include<string.h>

int main(){
    char arr[100];
    scanf("%s", arr);
    int counter[26] = {0};
    for(int i = 0;i < strlen(arr); i++){
        char value = arr[i];
        counter[value-'a']++;
    }
    for(char value = 'a'; value <= 'z'; value++){
        if(counter[value -'a'] > 0){
            printf("Value ---> %c count ---> %d\n", value, counter[value -'a']);
        }
    }
    return 0;
}