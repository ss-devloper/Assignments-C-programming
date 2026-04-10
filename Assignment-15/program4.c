//write a program which accept number from user and count of  digits in between 3 and 7


#include<stdio.h>
int CountDigitsBetween(int iNO)
{
    int iDigit =0;
    int iCount =0;

    while(iNO !=0)
    {
         iDigit =iNO % 10;
         iNO =iNO / 10;
         if(iDigit>=3 && iDigit<=7)
         {
            iCount++;
         }
    }
    return iCount;
    
      
    
}
int main()
{
    int iValue =0;
    int iRet =0;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    iRet =CountDigitsBetween(iValue);

    printf("The fRequency of digits is :%d",iRet);

    return 0;
}