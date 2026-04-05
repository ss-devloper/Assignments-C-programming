// write a program which accept number from user and display its multiplication factors.

// Input : 12
// output : 144 (1 * 2 * 3 *4 * 6)

#include<stdio.h>
int MultFact(int iNO)
{
    int iCnt =0;
    int Mult = 1;
   
    for( iCnt =1;iCnt<=(iNO/2);iCnt++)
    {
          if(iNO % iCnt == 0)
          {
            Mult =Mult * iCnt;
            
          }
            
    }
    return Mult;
  
  
}
int main()
{
    int iValue =0;
    int MultiplicationFactors =0;
    printf("Enter the number\n");
    scanf("%d", &iValue);
    MultiplicationFactors=MultFact(iValue);

    printf("%d",MultiplicationFactors);
    return 0;
}