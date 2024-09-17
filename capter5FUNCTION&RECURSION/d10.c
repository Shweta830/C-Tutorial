//write a function to convert celsius to faherenhit
#include<stdio.h>
float convertTemp(float celisius);
int main()
{
    float far=convertTemp(3);
    printf("Far is %f",far);
    return 0;
}
float convertTemp(float celisius){
    float far = celisius * (9.0/5.0)+32;
    return far;
}
