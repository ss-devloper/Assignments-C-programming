// Accept the number from user and give cont of digits which are between 0 to 10
#include<stdio.h>
int FindNumberCount(int iNO)
{
     int iCount =0;

    while(iNO !=0)
    {
         int iDigit =0;
        
         iDigit =iNO % 10;
         iNO = iNO / 10;
         if(iDigit>0 || iDigit<10)
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
    iRet = FindNumberCount(iValue);

    printf("the count of frequency is : %d",iRet);


    return 0;
}