//array
#include<stdio.h>
int main()
{
    int marks[3];
    printf("Enter math :");
    scanf("%d",&marks[0]);
     printf("Enter Phy :");
    scanf("%d",&marks[1]);
     printf("Enter che :");
    scanf("%d",&marks[2]);
    printf("math = %d,phy = %d,che = %d",marks[0],marks[1],marks[2]);

    return 0;
}