//write a program to finonacci series
#include<stdio.h>
int fibo(int n);
int main()
{
    printf("fiboonacchi sequence is:%d",fibo(6));
    return 0;
}
int fibo(int n){
    if (n==0)
    {
        return 0;
    }if (n==1)
    {
        return 1;
    }
    
    
    int fibooNm1=fibo(n-1);
    int fibooNm2=fibo(n-2);
    int fibooN=fibooNm1+fibooNm2;
    return fibooN;
}