#include<stdio.h>

int percentage(int CSE_101, int CSE_102, int CSE_103);

int main(){
    int CSE_101, CSE_102, CSE_103;

    printf("Enter the marks of CSE-101 : ");
    scanf("%d", &CSE_101);

    printf("Enter the marks of CSE-102 : ");
    scanf("%d", &CSE_102);

    printf("Enter the marks of CSE-103 : ");
    scanf("%d", &CSE_103);

    int ans =  percentage(CSE_101, CSE_102, CSE_103);
    printf("The percentage of tree subject is %d", ans);
   


    return 0;
}
int percentage(int CSE_101, int CSE_102, int CSE_103){
    int percentage = ((CSE_101 + CSE_102 + CSE_103) /3);
    return percentage;
}