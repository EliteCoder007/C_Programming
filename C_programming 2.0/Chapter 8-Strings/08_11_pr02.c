#include<stdio.h>
//                            bug..........
int main(){
    char st1[34];
    char st2[34];
    char c;
    char i = 0;

    printf("Enter the value of first string\n");

    scanf("%c", &c);
    printf("Enter the value of second string character by character\n");
    while(c != '\n'){
        fflush(stdin);
        scanf("%c", &c);
        st2[i] = c;
        i++;
    }
    st2[i - 1] = '\0';
    printf("The value if st1 is %s\n", st1);
    printf("The value of st2 is %s\n", st2);

    return 0;
}
