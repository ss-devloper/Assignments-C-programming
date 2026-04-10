// accept  number from user and give factorial of it 
#include<stdio.h>
int Factorial(int iNO)
{
    int iCnt =0;
    int iFact =1;
    for(iCnt =iNO;iCnt>=1;iCnt--)
    {
        iFact =iFact * iCnt;
        
    }
    return iFact;
}
int main()
{

    int iValue =0;
    int iRet =0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet= Factorial(iValue);

    printf("The factorial is : %d",iRet);
    return 0;
}