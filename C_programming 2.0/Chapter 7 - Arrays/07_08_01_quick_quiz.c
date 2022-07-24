#include<stdio.h>

// Segmentation fault (core dumped)..........

void marks_input_and_display(int n_students, int n_fav_subjects, int marks[n_students][n_fav_subjects]);

int main(){
    int n_students;
    printf("Enter the number of students: ");
    scanf("%d", &n_students);
    

    int n_favSubjects;
    printf("Enter the number of your Favourite subjects : ");
    scanf("%d", &n_favSubjects);
    

    int marks[n_students][n_favSubjects];

    marks_input_and_display(n_students, n_favSubjects, marks[n_students][n_favSubjects]);

    return 0;
}


void marks_input_and_display(int n_students, int n_fav_subjects, int marks[n_students][n_fav_subjects]){
    for(int i = 0; i < n_students; i++){
        for(int j = 0; j < n_fav_subjects; j++){
            printf("Enter the marks of student %d in Favourite subject %d : ", i+1, j+1);
            scanf("%d", &marks[n_students][n_fav_subjects]);
        }
    }

    for(int i = 0; i < n_students; i++){
        for(int j = 0; j < n_fav_subjects; j++){
            printf("The marks of student %d in Favourite subject %d is : %d ", i+1, j+1, marks[n_students][n_fav_subjects]);
        }
    }


}