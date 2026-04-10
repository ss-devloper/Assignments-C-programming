// Accept the number from user and give sum of numbers from 1 to upto that number 
#include<stdio.h>

int SumNumbers(int iNO)
{
    int iCnt =0;
    int iSum =0;
    for(iCnt =0;iCnt<=iNO;iCnt++)
    {
        iSum =iSum + iCnt;

    }
    return iSum;
}
int main()
{
    int iValue =0;
    int iRet =0;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    iRet = SumNumbers(iValue);
    printf("The summation of numbers is : %d",iRet);
    

    return 0;
}