//factorial no
#include<stdio.h>
int fact(int n);
int main()
{
   printf("Fact is :%d",fact(3)); 
    return 0;
}
int fact(int n){
    if (n==1)
    {
        return 1;
    }
  int factnm1=fact(n-1);
  int factN=factnm1*n;  
  return factN;
}