// Accept the number from user and sum of all factor 
#include<stdio.h>
int DisplaySumFactors(int iNO)
{
    int iCnt =0;
    
    int iSum =0;
    for(iCnt =1;iCnt<=iNO;iCnt++)
    {
        if(iNO % iCnt==0)
        {
             iSum =iSum+iCnt;
        }
       
    }
    return iSum;
    
}
int main()
{
    int iValue =0;
    int iRet =0;
    printf("Accept the number from user\n");
    scanf("%d",&iValue);
    iRet =DisplaySumFactors(iValue);
    printf("the sum of factors is:%d",iRet);
    return 0;
}