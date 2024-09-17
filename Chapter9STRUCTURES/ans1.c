//Make a system that can store information of all
//students, teachers & staff of your college in the form
//of structures.
#include<stdio.h>
#include<string.h>
#define MAX_STUDENTS 100
#define MAX_TEACHERS 50
#define MAX_STAFF 30

//student 
struct Student {
    int id;
    char name[50];
    int age;
    char course[50];
    float marks;
};
//teacher
struct Teacher {
    int id;
    char name[50];
    int age;
    char subject[50];
    float salary;
};
//staff
struct Staff {
    int id;
    char name[50];
    int age;
    char position[50];
    float salary;
};
int main()
{
    struct Student students[MAX_STUDENTS];
        struct Teacher teachers[MAX_TEACHERS];
    struct Staff staffs[MAX_STAFF];

int studentc=0;
int teacherc=0;
int staffCount=0;
//add a student
students[studentc].id = 1;
    strcpy(students[studentc].name, "Alice");
    students[studentc].age = 20;
    strcpy(students[studentc].course, "Computer Science");
    students[studentc].marks = 85.5;
    studentc++;
    //add a student
teachers[teacherc].id = 1;
    strcpy(teachers[teacherc].name, "Alice");
    teachers[teacherc].age = 20;
    strcpy(teachers[teacherc].subject, "Computer Science");
    teachers[teacherc].salary = 85.5;
    teacherc++;
    staffs[staffCount].id = 1;
    strcpy(staffs[staffCount].name, "Mr. Smith");
    staffs[staffCount].age = 40;
    strcpy(staffs[staffCount].position, "Librarian");
    staffs[staffCount].salary = 30000.0;
    staffCount++;

    // Output example: Display student information
    printf("Student Information:\n");
    for (int i = 0; i < studentc; i++) {
        printf("ID: %d, Name: %s, Age: %d, Course: %s, Marks: %.2f\n",
               students[i].id, students[i].name, students[i].age, students[i].course, students[i].marks);
    }
// Output example: Display teacher information
    printf("\nTeacher Information:\n");
    for (int i = 0; i < teacherc; i++) {
        printf("ID: %d, Name: %s, Age: %d, Subject: %s, Salary: %.2f\n",
               teachers[i].id, teachers[i].name, teachers[i].age, teachers[i].subject, teachers[i].salary);
    }

    // Output example: Display staff information
    printf("\nStaff Information:\n");
    for (int i = 0; i < staffCount; i++) {
        printf("ID: %d, Name: %s, Age: %d, Position: %s, Salary: %.2f\n",
               staffs[i].id, staffs[i].name, staffs[i].age, staffs[i].position, staffs[i].salary);
    }
    return 0;
}