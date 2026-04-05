// accept number from user and check whether number is even or odd 

#include<stdio.h>
#include<stdbool.h>
bool CheckEvenOdd(int iNO)
{
    if(iNO < 1)
    {
        printf("invalid input\n");
    }
    if((iNO % 2)==0)
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
    scanf("%d\n",&iValue);
    bRet = CheckEvenOdd(iValue);

    if(bRet == true )
    {
        printf("the number is even number\n");

    }
    else 
    {
        printf("the number is odd nunber");
    }

    return 0;
}