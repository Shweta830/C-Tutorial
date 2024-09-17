#include<stdio.h>
int main()
{
    float prize = 100.00;
    float *ptr=&prize;
    printf("ptr =%u\n",ptr);
ptr++;
printf("ptr =%u\n",ptr);
ptr--;
    printf("ptr =%u\n",ptr);
    return 0;
}