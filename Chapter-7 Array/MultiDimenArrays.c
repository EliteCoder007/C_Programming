#include<stdio.h>

int main(){
    //2 student's 3 subject's marks;
    int marks[2][3];//  _ _ _ | _ _ _
    marks [0][0] = 90;
    marks[0][1] = 89;
    marks[0][2] = 78;

    marks[1][0] = 96;
    marks[1][1] = 80;
    marks[1][2] = 76;

    printf("%d", marks[0][0]);

    return 0;
}