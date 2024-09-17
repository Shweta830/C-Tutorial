#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if (num>=0)
    {
    printf("Positive\n");
    if(num%2==0){
        printf("even");
    }else{
        printf("odd");
    }
    }
    else{
            printf("Negative");

    }
    
    return 0;
}