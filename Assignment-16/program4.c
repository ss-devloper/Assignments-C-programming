// Accept the number from user and reverse it 
#include<stdio.h>
int reverseNumber(int iNO)
{

    while(iNO !=0)
    {
         int iDigit =0;
         iDigit =iNO % 10;
         iNO = iNO / 10;

         printf("%d",iDigit);
    }
   
}
int main()
{
    int iValue =0;
    int iRet =0;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    iRet = reverseNumber(iValue);

    return 0;
}