// Accept a number from user and show its non factors 
#include<stdio.h>
void NonFactor(int iNO)
{
    int iCnt =0;
    for(iCnt =1;iCnt<=iNO;iCnt++)
    {
        if(iNO % iCnt != 0)
        {
            printf("%d\n",iCnt);
        }
        
    }
}
int main()
{
     
    int iValue =0;
    printf("Enter the number\n");
    scanf("%d\n",&iValue);
    NonFactor(iValue);


    return 0;
}