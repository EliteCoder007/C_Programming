#include<stdio.h>
//true=1,false=0;
//relational op = (==,<=,>=,<,>,!=)
int main(){
    printf("%d \n",4 > 4);

    //logical op(&&, ||, !)
    printf("%d \n",4 == 4 && 4 < 5);
    //assignmentop
    int a = 2, b = 4;
    printf("%d", a+=b);//a=a+b;
}