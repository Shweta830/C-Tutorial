//
#include<stdio.h>
#include<string.h>
struct d2
{
    int roll;
    char name[100];
};

void printInfo(struct d2 s1);
int main()
{
    struct d2 s1={1234,"shweta"};
    printInfo(s1); 
        s1.roll=21445;
    printf("Student.roll is  :%d\n",s1.roll);

    
    return 0;
}
void printInfo(struct d2 s1){
  printf("Student information :\n");
    printf("Student.roll is  :%d\n",s1.roll);
    printf("Student.name is  :%s\n",s1.name);


} 