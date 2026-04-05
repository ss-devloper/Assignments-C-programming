// accept number from user and print its number line
// input : 4
// output : -4 -3 -2.....3,4
#include<stdio.h>
void DisplayNumberLine(int iNO)
{
    int iCnt =0;
    for(iCnt =iNO;iCnt>=(-iNO);iCnt--)
    {
        printf("%d\t",-iCnt);
    }
}
int main()
{
    int iValue =0;
    printf("enter the number\n");
    scanf("%d",&iValue);
    DisplayNumberLine(iValue);
    return 0;
}