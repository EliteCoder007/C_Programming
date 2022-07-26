#include<stdio.h>
#include<string.h>


int main(){
    char a[100], b[100], jogfol[101];
    scanf("%s %s",a, b);

    strrev(a);
    strrev(b);

    int hate = 0, k = 0;
    for(int i = 0, j = 0; i < strlen(a) && j < strlen(b); i++, j++){
        int sum = (a[i] - '0') + (b[j] - '0') + hate;
        jogfol[k] = (sum % 10 + '0');
        hate = sum / 10;
    }

    for(int i = 0; i < strlen(a); i++){
        int sum = (a[i] - '0') + hate;
        jogfol[k] = (sum % 10 + '0');
        hate = sum / 10;
        k++;
    }

    for(int j = 0; j < strlen(b); j++){
        int sum = (b[j] - '0') + hate;
        jogfol[k] = (sum % 10 + '0');
        hate = sum / 10;
        k++;
    }
    strrev(jogfol);
    printf("%s", jogfol);
    return 0;
}