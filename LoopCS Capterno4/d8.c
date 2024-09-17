//print the sum of first  n natural number
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
   int  count=0;
  for (int i=1,j=n;i<=n&&j>=1; i++,j--)
  {
    count=count+i;
    printf("%d\n",j);
  }
  printf("Sum id %d\n",count);
    
    return 0;
}
