// write program to find Odd factorial of given number 
#include<stdio.h>
int Display(int iNO)
{
    int iCnt =0;
    int iFact =1;
    for(iCnt =iNO;iCnt>=2;iCnt--)
    {
        if(iCnt % 2 !=0)
        {
          
            iFact = iFact * iCnt;
        }
        
    }
    return iFact;

}
int main()
{
    int iValue =0;
    int iRet =0;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    iRet =Display(iValue);
    printf("the even factorial of given number is :%d",iRet);
    return 0;
}