//Write a program to check if a given number is
//Armstrong number or not.
#include<stdio.h>
int main()
{
     int num,rem,res=0,temp;
     printf("enter the number:");
     scanf("%d",&num);
     temp=num;
     while (num>0)
     {
     rem=num%10;
     res=res+(rem*rem*rem);
     num=num/10;
     }
     if (temp==res)
     {
        printf("Armstrong no");
     }
     else{
        printf("not Armstrong number:");
     }
     
     
    return 0;
}

 