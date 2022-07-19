#include<stdio.h>

int main(){
    int year;
    printf("Enter a Year : \n");
    scanf("%d", &year);

    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                printf("The Year is leap year\n");
            }
            else{
                printf("The year is not leap year\n");
            }
            
        }
        else{
            printf("The is a leap year\n");
        }
    }
    else{
        printf("The is not leap year\n");
    }

    return 0;
}



//bestl...........
// #include <stdio.h>
// int main() {
//    int year;
//    printf("Enter a year: ");
//    scanf("%d", &year);

//    // leap year if perfectly divisible by 400
//    if (year % 400 == 0) {
//       printf("%d is a leap year.", year);
//    }
//    // not a leap year if divisible by 100
//    // but not divisible by 400
//    else if (year % 100 == 0) {
//       printf("%d is not a leap year.", year);
//    }
//    // leap year if not divisible by 100
//    // but divisible by 4
//    else if (year % 4 == 0) {
//       printf("%d is a leap year.", year);
//    }
//    // all other years are not leap years
//    else {
//       printf("%d is not a leap year.", year);
//    }

//    return 0;
// }