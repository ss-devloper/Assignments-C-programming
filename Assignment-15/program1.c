// Accept number from user find out which are odd and evn and give difference between summation of them 

#include<stdio.h>
int EvenOddSummationDiff(int iNO)
{
    int iDigit =0;
    int iSumOdd =0;
    int iSumEven =0;
    int iDiffrence =0;


    while(iNO !=0)
    {
         iDigit =iNO % 10;
         iNO =iNO / 10;
         if(iDigit % 2== 0)
         {
            iSumEven =iSumEven +iDigit;
         }
         else if(iDigit % 2 != 0)
         {
            iSumOdd = iSumOdd +iDigit;
         }

           if(iDiffrence<1)
           {
         
             iDiffrence =-iDiffrence;
           } 

            iDiffrence = iSumOdd -iSumEven;
    }
    return iDiffrence;
      
    
}
int main()
{
    int iValue =0;
    int iRet =0;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    iRet =EvenOddSummationDiff(iValue);

    printf("The difference is :%d",iRet);




    return 0;
}