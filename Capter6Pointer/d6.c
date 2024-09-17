#include<stdio.h>
void square(int n);
void _square(int* n);

int main()
{
    int num=3;
    square(num);
    printf("number is %d\n",num);
    _square(&num);
    printf("number is %d\n",num);
    return 0;
}
//call by value
void square(int n){
    n=n*n;
    printf("%d\n",n);
}
void _square(int* n){
    *n=(*n) * (*n);  // 4*4
        printf("%d\n",*n);
}
