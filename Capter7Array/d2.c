#include<stdio.h>
int main()
{
     float prize[3];
     printf("enter 3 prizes:");
     scanf("%f",&prize[0]);
    scanf("%f",&prize[1]);
     scanf("%f",&prize[2]);
  printf("total Prize 1 is :%f\n",prize[0]+(0.18*prize[0]));
    printf("total Prize 2 is :%f\n",prize[1]+(0.18*prize[1]));
  printf("total Prize 3 is :%f\n",prize[2]+(0.18*prize[2]));
 
    return 0;
}