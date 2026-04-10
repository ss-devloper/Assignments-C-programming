// accept number from user and check where it contains 0 int it or not 
#include<stdbool.h>
#include<stdio.h>
bool CheckwhetherZero(int iNO)
{
    
    while(iNO !=0)
    {
        int iCount =0;
        int iDigit =0;
        iDigit = iNO % 10;
        iNO = iNO /10;
        if(iDigit==0)
        {
            return true;
            iCount++;
        }
        else 
        {
            false;
        }

    }
   

}
int main()
{

    int iValue =0;
    bool bRet =false;
   
    printf("Enter the number\n");
    scanf("%d",&iValue);
    
    bRet= CheckwhetherZero(iValue);
  

    if(bRet == true)
    {
          printf("the number having zero",bRet);
    }
    else 
    {
         printf("the number having no zero",bRet);
    }
    
    return 0;
}