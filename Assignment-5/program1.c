// Accept the number from user and check whether its even or odd 
#include<stdio.h>
#include<stdbool.h>
bool CheckEvenOdd(int iNO)
{
    // updator 
    if(iNO < 1)
    {
        iNO =- iNO;
       
    }
    if(iNO % 2 ==0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int main()
{
    int iValue =0;
    bool bRet =false;
    printf(" Enter the number\n");
    scanf("%d",&iValue);
    bRet=CheckEvenOdd(iValue);
    if(bRet ==true)
    {
        printf("The given number is even number\n");

    }
    else 
    {
        printf("the number is odd\n");
    }
    return 0;
}