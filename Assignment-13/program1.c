//accept limit from user and print all numbers from 1 to that number limit
#include<stdio.h>
void Display(int iNO)
{
    int iCnt =0;
    for(iCnt =1;iCnt<=iNO;iCnt++)
    {
        printf("%d\n",iCnt);
    }
}
int main()
{
    int limit =0;
    printf("Enter the limit\n");
    scanf("%d",&limit);
    Display(limit);

    return 0;
}