// accept number from user and count frequency of 2 in it
#include<stdbool.h>
#include<stdio.h>
int CountFrequency(int iNO)
{
    int iCount =0;
    while(iNO !=0)
    {
        
        int iDigit =0;
        iDigit = iNO % 10;
        iNO = iNO /10;
        if(iDigit==2)
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
    
    iRet= CountFrequency(iValue);
    printf("the frequency of 2 is :%d",iRet);
  


    
    return 0;
}