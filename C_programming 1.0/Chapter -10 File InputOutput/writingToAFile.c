#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Newtest.txt", "a");

    fprintf(fptr, "%c", 'C');
    fprintf(fptr, "%c", 'o');
    fprintf(fptr, "%c", 'd');
    fprintf(fptr, "%c", 'e');
    fprintf(fptr, "%c", 'r');
    fclose(fptr);
    

    return 0;
}