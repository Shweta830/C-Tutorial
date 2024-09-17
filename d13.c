//c. Write a program to print the smallest number of two.
#include<stdio.h>
int main()
{ 
    int a,b;
    printf("Enter the number:");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("smallest no :%d",b);
}
else
{
    printf("%d",a);
}
    
    return 0;
}