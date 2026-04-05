// accept the number from user return difference between summation of its factors and non factors

#include<stdio.h>
int FactDiff(int iNO)
{
    int iSumFactors =0;
    int iSumNonFactors =0;
    int FactorsNonfactorsDiff =0;
    int iCnt =0;
    for(iCnt =1;iCnt<=(iNO/2);iCnt++)
    {
        if(iNO % iCnt ==0)
        {
            iSumFactors =iSumFactors + iCnt;
        }
    }
    printf("The sum of factors is : %d\n",iSumFactors);

    for(iCnt =1;iCnt<=iNO;iCnt++)
        {
            if(iNO % iCnt != 0)
            {
                iSumNonFactors =iSumNonFactors +iCnt;
            }
        }
   
    printf("The sum of Nonfactors is : %d\n",iSumNonFactors);


  FactorsNonfactorsDiff= iSumFactors-iSumNonFactors;

    
    if(FactorsNonfactorsDiff < 1)
    {
        FactorsNonfactorsDiff = -FactorsNonfactorsDiff;
    }
    
return FactorsNonfactorsDiff;
}
int main()
{   
    int iValue =0;
    int iRet =0;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    iRet =FactDiff(iValue);
    printf("The factors non factors diff is : %d\n",iRet);


    return 0;

}