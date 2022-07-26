#include<stdio.h>
#include<string.h>

int main(){
    char str[1000];
    int counter[1000] = {0};
    int val=0;
    scanf("%s", str);
    for(int i = 0; i < strlen(str); i++){
        // if(str[i] ){
            if(str[i] >= '0' && str[i] <= '9'){
                val = counter[i];
                counter[i]++;
                val++;
                str[i]++;
                
            }
        // }
        printf("%d ",val);
    }
    
    return 0;
}