// HOMEWORK SET

// a. Write a program to check if a given number is
// Armstrong number or not.
// (Search what is Armstrong number)//An Armstrong number is one whose sum of digits raised to the power three equals the number itself. 371, for example, is an Armstrong number because 3**3 + 7**3 + 1**3 = 371

// #include<stdio.h>

// int main(){
//     int isAmstrongNum;
//     printf("Enter any number : ");
//     scanf("%d", &isAmstrongNum);

//     int calculation = 1;
//     int sum = 0;
//     while(1){
//         int digit = isAmstrongNum /10;
//         calculation = digit * digit * digit;
//         sum += calculation;
        
//         if(digit == 0)break;
//     }
    
//     if( sum == isAmstrongNum){
//         printf("%d is a amstrong num", isAmstrongNum);
//     }
//     else{
//         printf("%d is not a amstrong num", isAmstrongNum);
//     }
    
// }

// b. Write a program to check if the given number is a
// natural number.
// (Natural numbers start from 1)


// #include<stdio.h>

// int main(){
//     int isNaturalNum;
//     printf("Enter any number : ");
//     scanf("%d", &isNaturalNum);

//     if(isNaturalNum >= 0){
//         printf("This is a natural number \n");
//     }else{
//         printf("This is not");
//     }
//     return 0;
// }
