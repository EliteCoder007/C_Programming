#include<stdio.h>

int main(){
    for(int i=1; i<=5; i++){
        if(i == 3){
            break;//nested loop theke o ber kore daw
        }
        printf("%d\n", i);

    }
    printf("End");
}