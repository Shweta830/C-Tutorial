//make a structure to store BAnk account information of a customer to ABC bank.al
//also make an alias for it
#include<stdio.h>
#include<string.h>
typedef  struct bankAccount
{
    int accNo;
    char name[100];
}acc;

int main()
{
    acc acc1={3345,"Nisha"};
    acc acc2={869,"Neetoo"};
    acc acc3={9879,"Shweta"};
    printf("Acc no: %d\n",acc1.accNo);
    printf("Name is : %s",acc1.name);
    return 0;
}