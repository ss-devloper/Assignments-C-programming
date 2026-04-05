// Write a programm to find factorial of given numbers



#include<stdio.h>
int Display(int iNO)
{
    int iCnt =0;
    int iFact =1;
    for(iCnt =iNO;iCnt>=1;iCnt--)
    {
        iFact =iFact *iCnt;
    }
    return iFact;


}
int main()
{

    int iRet =0;
    int iValue =0;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    iRet=Display(iValue);
    printf("THe factorial is : %d",iRet);

}