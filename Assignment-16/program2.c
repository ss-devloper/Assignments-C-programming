// Accept the number from user and check is it even or odd 

#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNO)
{
    if(iNO % 2 == 0)
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
    printf("Enter the number\n");
    scanf("%d",&iValue);
    bRet =CheckEvenOdd(iValue);
    if(bRet == true)
    {
        printf("The number is even number\n");
    }
    else 
    {
        printf("the number is odd number\n");
    }

    return 0;
}