// Accept the number from user and print its all factor 
#include<stdio.h>
void DisplayAllFactors(int iNO)
{
    int iCnt =0;
    for(iCnt =1;iCnt<=iNO;iCnt++)
    {
        if(iNO % iCnt==0)
        {
            printf("%d\n",iCnt);
        }

    }
    
}
int main()
{
    int iValue =0;
    printf("Accept the number from user\n");
    scanf("%d",&iValue);
    DisplayAllFactors(iValue);
    return 0;
}