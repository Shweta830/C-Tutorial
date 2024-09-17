//find total numbers digit in the given no 456=3
#include<stdio.h>
int main()
{
   int num ,digit=0;
   printf("ENter the no :");
   scanf("%d",&num);
   while (num >0)
   {
    digit++;
    num=num/10;

   }
           printf("total numbers digit  is:%d\n",digit);

    return 0;
}