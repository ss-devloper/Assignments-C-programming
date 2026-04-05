// program which return difference between even factorial and odd factorial
// write program to find Odd factorial of given number 
#include<stdio.h>
int FactorialDifference(int iNO)
{
    int iCnt =0;
    int OddFact =1;
    int EvenFact =1;
    int iDifference =0;
    for(iCnt =iNO;iCnt>=2;iCnt--)
    {
        if(iCnt % 2 !=0)
        {
          
            OddFact = OddFact * iCnt;
        }
        else 
        {
            EvenFact = EvenFact * iCnt;
        }
        
    }
    
    iDifference =EvenFact - OddFact;
    if(iDifference <1)
     {
        iDifference =-iDifference;
     }
    return iDifference;
  

}
int main()
{
    int iValue =0;
    int iEven =0;
    int iOdd =0;
    int Diff =0;
  
    printf("Enter the number\n");
    scanf("%d",&iValue);

    Diff =FactorialDifference(iValue);
    
    printf("The difference is : %d",Diff);

    return 0;
}