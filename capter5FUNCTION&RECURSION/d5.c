#include<stdio.h>
void calculatePrize(float  value);
int main()
{ 
    float value=100.0;
    calculatePrize(value);
    printf("The value is:%f\n",value);
    return 0;
}
void calculatePrize(float  value){
    value = value +(0.18*value);
    printf("%f\n",value);
}
