#include<stdio.h>
#include<math.h>
// to solve undefined reference to `pow' use
// Add –lm linker flag with compilation command.
int main(){
    int side;
    printf("Enter the value of side\n");
    scanf("%d", &side);
    printf("The value of area is %f\n", pow(side,2));
    return 0;
}