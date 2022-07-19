#include<stdio.h>

int main(){
    int watermelon_in_kilos;
    scanf("%d", &watermelon_in_kilos);

    int pete, billy;
    pete = watermelon_in_kilos / 2;
    billy = watermelon_in_kilos - pete;

    if(watermelon_in_kilos == 0){
        printf("NO");
    }
    else if(pete % 2 == 0 && billy % 2 == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }

   
    return 0;
}