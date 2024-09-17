#include<stdio.h>
int swap(int a,int b);
int main()
{
    int a,b;
    printf("enter the no ofa and b:");
    scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("after swap the value of :=%d ,=%d",a,b);
    return 0;

}