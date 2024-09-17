#include<stdio.h>
#include<string.h>
struct d2
{
    int roll;
    char name[100];
};

int main()
{
    struct d2 ece[100];
    ece[0].roll=2345;
    strcpy(ece[0].name,"Shweta");
    printf("Roll no %d\n",ece[0].roll);
    printf("Name :%s",ece[0].name);

    
    return 0;
}