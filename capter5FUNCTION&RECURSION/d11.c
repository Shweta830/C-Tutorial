//write a function to calculate percentage pf a student from marks in science,
//math and sansrkrit
#include<stdio.h>
int calculatePer(int science ,int math,int sanskrit);
int main()
{
    int sc=80;
    int math=90;
    int sans=80;
    printf("Percentage is:%d",calculatePer(sc,math,sans));
    return 0;
}
int calculatePer(int science ,int math,int sanskrit){
    return  ((science+math+sanskrit)/3);

}