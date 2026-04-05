// accept N from user and print all odd numbers upto N
//odd : %2 !=0

#include<stdio.h>
void Display(int iNO)
{
    int iCnt =0;
    for(iCnt =1;iCnt<=iNO;iCnt++)
    {
        if(iCnt % 2 != 0)
        {
             printf("%d\t",iCnt);
        }
        
    }
    /*
    int iCnt =1
    while(iCnt<=iNO)
    {
       if(iCnt % 2 != 0)
        {
             printf("%d\t",iCnt);
        }
             iCnt++;
    }
    
    
    */
}
int main()
{
    int iValue =0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}