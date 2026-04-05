//Accept the number from user and checkwhether its divisible by 5 or nor 
#include<stdio.h>
#include<stdbool.h>

bool CheckDivisiablity(int iNO)
{
    if(iNO % 5 ==0)
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
    CheckDivisiablity(iValue);
    if(bRet == false )
    {
        printf("the number is not divisible by 5\n");
    }
    else 
    {
        printf("The number is divisible by 5\n");
    }

    return 0;
}