// accept number from user and print from 1to that number 
#include<stdio.h>
void DisplayNumbers(int iNO)
{
    int iCnt =0;
    for(iCnt =1;iCnt<=iNO;iCnt++)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
    int iValue =0;
    printf("enter the number\n");
    scanf("%d",&iValue);
    DisplayNumbers(iValue);
    return 0;
}