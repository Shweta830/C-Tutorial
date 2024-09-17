#include<stdio.h>
int main()
{
    char day;
    printf("enter the chracter  :");
    scanf("%c",&day);
    switch (day)
    {
    case 'm':
    printf("Monday");
        break;
    case 't':
    printf("Tuesday");
        break;
        case 'w':
    printf("Wednesday");
        break;
        case 'T':
    printf("Thrusday");
        break;
        case 'f':
    printf("Friday");
        break;
        case 's':
    printf("Saturday");
        break;
        case 'S':
    printf("Sunday");
        break;
    default:
        printf("nOt a valid day");
    }
    
    return 0;
}