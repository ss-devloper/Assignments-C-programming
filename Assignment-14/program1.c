// Accept the number from user and display its digits in reverse order 

#include<stdio.h>
int reverseDisplay(int iNO)
{
    int iCnt =0;
    while(iNO !=0)
    {
    int iDigit =0;
     iDigit = iNO % 10;
    iNO = iNO /10;
    printf("%d\n",iDigit);

    }
   

}
int main()
{

    int iValue =0;
   
    printf("Enter the number");
    scanf("%d",&iValue);
    
    reverseDisplay(iValue);
    
    return 0;
}