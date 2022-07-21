#include<stdio.h>
#define g 9.8

float force(int mass);

int main(){
    int mass;
    printf("Enter your mass in kgs : ");
    scanf("%d", &mass);

    float force_due_to_gravity = force(mass);
    printf("The force due to earth is : %.2f N", force_due_to_gravity);
    return 0;
}

float force(int mass){
    float force_due_to_gravity = mass * g;

    return force_due_to_gravity;

}