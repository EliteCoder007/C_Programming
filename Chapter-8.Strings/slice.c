#include<stdio.h>

void slice(char str[], int n, int m);

int main(){
    char str[100];
    printf("Enter Your String : ");
    fgets(str,100,stdin);

    int n, m;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("Enter the value of m : ");
    scanf("%d",&m);
    slice(str,n,m);

    return 0;
}


void slice(char str[], int n, int m){
    char newStr[100];
    int j = 0;
    for(int i=n; i<=m; i++, j++){
        newStr[j] = str[i];
    }
    newStr[j] = '\0';
    puts(newStr);

}