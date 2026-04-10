//write  program which accept number from user and return multiplication of all digits




#include<stdio.h>
int MultDigit(int iNO)
{
    int iDigit =0;
    int iMult =1;

    while(iNO !=0)
    {
         iDigit =iNO % 10;
         iNO =iNO / 10;

         iMult = iMult * iDigit;
         
    }
    return iMult;
    
      
    
}
int main()
{
    int iValue =0;
    int iRet =0;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    iRet =MultDigit(iValue);

    printf("The multiplication of digits is :%d",iRet);

    return 0;
}