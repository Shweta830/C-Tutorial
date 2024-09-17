#include<stdio.h>
float squareArea( float side);
float rectangleArea( float a,float b);
float circularArea(float rad);
int main()
{
     float a=3.0;
     float b=2.0;
    printf("Area is : %f\n",rectangleArea(a,b));
    float side = 10.0;
    printf("SquareArea is : %f\n", squareArea(side));
    float rad=2;
    printf("CircularArea is :%f\n",circularArea(rad));
    return 0;
}
float squareArea( float side){
    return side*side;
}
float rectangleArea( float a,float b){
    return a*b;
}
float circularArea(float rad){
    return 3.14*rad*rad;
}