// Accept the number from user and count all factor 
#include<stdio.h>
int DisplayAllFactors(int iNO)
{
    int iCnt =0;
    int iCount =0;
    for(iCnt =1;iCnt<=iNO;iCnt++)
    {
        if(iNO % iCnt==0)
        {
            iCount++;
        }

    }
    return iCount;
    
}
int main()
{
    int iValue =0;
    int iRet =0;
    printf("Accept the number from user\n");
    scanf("%d",&iValue);
    iRet =DisplayAllFactors(iValue);
    printf("the Factors count is :%d",iRet);
    return 0;
}