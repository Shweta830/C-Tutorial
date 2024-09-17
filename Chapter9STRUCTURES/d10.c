//you have to store the marks of 30 students in class will you use?
//a.array of 10 floats
//b.structures
#include <stdio.h>

#define NUM_STUDENTS 30

// Define a structure to hold student information
struct Student {
    float marks;
};

int main() {
    // Declare an array of 30 Student structures
    struct Student students[NUM_STUDENTS];

    // Input marks for each student
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &students[i].marks);
    }

    // Output the marks for each student
    printf("\nMarks of students:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Student %d: %.2f\n", i + 1, students[i].marks);
    }

    return 0;
}
