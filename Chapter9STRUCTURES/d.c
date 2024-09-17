//STRUCTURES
#include<stdio.h>
#include<string.h>
//user defined
struct student
{
    int roll;
    char name[100];
    float cgpa;
};

int main()
{
   struct student s1;
    s1.roll=9004;
    // s1.name="shweta";
    strcpy(s1.name,"Shweta");
    s1.cgpa=8.3;
    printf("Student roll no : %d\n",s1.roll);
        printf("Student name is : %s\n",s1.name);

    printf("Student cgpa : %f\n",s1.cgpa);

   
 
    return 0;
}