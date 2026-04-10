//write a program which accept number from user and count of Odd digits// write a program which accept number from user and count of even digits

#include<stdio.h>
int CountOddDigits(int iNO)
{
    int iDigit =0;
    int iCount =0;

    while(iNO !=0)
    {
         iDigit =iNO % 10;
         iNO =iNO / 10;
         if(iDigit % 2!= 0)
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
    iRet =CountOddDigits(iValue);

    printf("The fRequency of odd digits is :%d",iRet);

    return 0;
}