//find sum of first even N natural numbers

#include<stdio.h>
int DisplayNatural(int iNO)
{
    int iCnt =0;
    int iSum =0;
    for(iCnt =1;iCnt<=iNO;iCnt++)
    {
        if(iCnt % 2==0)
        {
            iSum =iSum + iCnt;
        }
       
    }
    return iSum;
}
int main()
{
    int limit =0;
    int iRet =0;
    printf("Enter the limit\n");
    scanf("%d",&limit);
    iRet=DisplayNatural(limit);
    printf("The sum is : %d",iRet);

    return 0;
}