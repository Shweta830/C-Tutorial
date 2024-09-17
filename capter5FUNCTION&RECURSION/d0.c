#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int ab(int a ,int b,int sum,int diff);
int main()
{
	
    int a , b;
    printf("enter the two no");
    scanf("%d\t%d\n",&a,&b);
     float c , d;
    printf("enter the two no");
    scanf("%f\t%f\n",&c,&d);
    int ab(int a ,int b,int sum,int diff);
    return 0;
}
int ab(int a ,int b,int sum,int diff){
    if(a>0 && b>0){
        sum=a+b;
        printf("%d\t",sum);
        if(a>0 && b>0){
            diff=a-b;
            printf("%d\n",diff);
        }
    }

}