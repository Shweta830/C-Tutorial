#include <stdio.h>
int main()
{
    int marks;
    printf("enter the numner:");
    scanf("%d", &marks);
    // if (marks >= 30 && marks <= 100)
    // {
    //     printf("pass");
    // }
    // else if (marks <= 30)
    // {
    //     printf("fail");
    // }

    // else
    // {
    //     printf("wrong number");
    // }
    // return 0;
    marks >=30  ? printf("pass"): printf("fail");
}