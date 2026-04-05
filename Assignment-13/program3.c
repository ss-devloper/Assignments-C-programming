//accept limit from user and print all odd numbers upto to that number limit
#include<stdio.h>
void DisplayOdd(int iNO)
{
    int iCnt =0;
    for(iCnt =2;iCnt<=iNO;iCnt++)
    {
        if(iCnt % 2!=0)
        {
             printf("%d\n",iCnt);
        }
       
    }
}
int main()
{
    int limit =0;
    printf("Enter the limit\n");
    scanf("%d",&limit);
    DisplayOdd(limit);

    return 0;
}