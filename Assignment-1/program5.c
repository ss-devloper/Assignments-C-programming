// accept number from user and check whther it is divisible by 5 or not 
#include<stdio.h>
#include<stdbool.h>
bool CheckDivisiblity(int iNO)
{
    if((iNO % 5)==0)
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
    bool bRet = false;
    int iValue =0;
    printf("Enter the number\n");
    scanf("%d\n",&iValue);
    bRet=CheckDivisiblity(iValue);
    if(bRet == true )
    {
        printf("Divisible by 5");
    }
    else 
    {
        printf(" NOT DIVISIBLE\n");
    }
    return 0;
}