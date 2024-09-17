//d. Make your own pow function.
#include<stdio.h>
#include<math.h>
double myPow(double base,int exponent);
int main()
{
   double base;
   int exponent;
    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    printf("%.2lf raised to the power of %d is %.2lf\n", base, exponent, myPow(base, exponent));

    return 0;
}
double myPow(double base,int exponent){
    double res=1.0;
    int absExponent=exponent <0 ? -exponent :exponent;
    for (int i = 0; i<absExponent; i++)
    {
        res*=base;
    }
    return exponent < 0 ? 1.0/ res :res;
}
    