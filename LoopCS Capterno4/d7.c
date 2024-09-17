//print the sum of first  n natural number
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
   int  count=0;
  for (int i = 0; i <=n; i++)
  {
    count=count+i;
  }
  printf("Sum id %d",count);
    
    return 0;
}