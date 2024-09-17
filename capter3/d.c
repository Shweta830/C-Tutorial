#include<stdio.h>
int main()
{
    int age;
    printf("enter age:");
    scanf("%d",&age);
    if (age>18)
    {
    printf("adult\n");
    printf("They can vote/\n");
    }
    else{
        printf("not adult\n");
    }
    printf("Thank u");
    return 0;
}

// PS C:\C Tutorial\capter3> gcc d.c    
// PS C:\C Tutorial\capter3> ./a.exe 
// enter age:34
// adult
// They can vote/
// Thank u
// PS C:\C Tutorial\capter3> ./a.exe
// enter age:2
// not adultThank u