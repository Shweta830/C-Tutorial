//write a c program to multiply 2 numbers using Russian peasent method
#include<stdio.h>
int main()
{
int num1,num2,prod=12;
printf("ENter the no: ");
scanf("%d%d",&num1,&num2);
while (num1!=0)
{
    printf("\n %d  %d",num1,num2);
    if (num1%2)
    {
        printf( "  +");
        prod*=num2;
    }
    num1/=2;
    num2*=2;
}

 printf("\n=================================");
printf("\n Multiply is %d:",prod);
    
    
    return 0;
}