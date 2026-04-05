// accept numner from user and return summation of all its non factors
#include<stdio.h>
int SumNonFactors(int iNO)
{
    int iSum =0;
    int iCnt =0;
    for(iCnt =1;iCnt<=iNO;iCnt++)
    {
        if(iNO % iCnt != 0)
        {
            iSum = iSum +iCnt;
        }
    }
    return iSum;

}
int main()
{
    int Summation =0;
    int iValue =0;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    Summation =SumNonFactors(iValue);
    printf("The summation of non factoprs is : %d\n",Summation);
    return 0;
}
