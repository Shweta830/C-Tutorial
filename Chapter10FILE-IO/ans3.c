//Format the information of 5 students (name,
// marks, cgpa, course) in a table like structure in a file
#include <stdio.h>

struct Student {
    char name[50];
    int marks;
    float cgpa;
    char course[50];
};

int main() {
    struct Student students[5];
    FILE *file;
    
    // Sample data for 5 students
    for(int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);  // Read string with spaces
        printf("Marks: ");
        scanf("%d", &students[i].marks);
        printf("CGPA: ");
        scanf("%f", &students[i].cgpa);
        printf("Course: ");
        scanf(" %[^\n]s", students[i].course);  // Read string with spaces
        printf("\n");
    }

    // Open the file in write mode
    file = fopen("ans1.txt", "w");
    if (file == NULL) {
        printf("Could not open file for writing.\n");
        return 1;
    }

    // Write the table header
    fprintf(file, "--------------------------------------------------------------\n");
    fprintf(file, "| %-20s | %-10s | %-10s | %-10s |\n", "Name", "Marks", "CGPA", "Course");
    fprintf(file, "--------------------------------------------------------------\n");

    // Write the students' information in table format
    for(int i = 0; i < 5; i++) {
        fprintf(file, "| %-20s | %-10d | %-10.2f | %-10s |\n", students[i].name, students[i].marks, students[i].cgpa, students[i].course);
    }

    // Write the table footer
    fprintf(file, "--------------------------------------------------------------\n");

    // Close the file
    fclose(file);

    printf("Student information written to file successfully.\n");

    return 0;
}
