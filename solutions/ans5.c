//b. Write a function to find square root of a number.
#include<stdio.h>
#include<math.h>
double findRoot(double num);
int main()
{ 
    double number,res;
    printf("Enter a number:");
    scanf("%lf",&number);
    res=findRoot(number);
    if (number<0)
    {
        printf("It is not a number:");
    }else{
        printf("squre is %.2lf is %.2lf\n",number,res);
    }
    
    
    return 0;
}
double findRoot(double num){
    return sqrt(num);
}