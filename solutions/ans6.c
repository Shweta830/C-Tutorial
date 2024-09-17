//Write a function to print "Hot" or "Cold" depending
//on the temperature user enters.
#include<stdio.h>
void checkTemp(int temp);
int main()
{
    int temperature;
    printf("enter the tempratoure");
    scanf("%d",&temperature);
    checkTemp(temperature);
    return 0;
}
void checkTemp(int temp){
    if (temp>=30)
    {
        printf("Hot\n");
    }else{
        printf("Cold\n");
    }
    
}