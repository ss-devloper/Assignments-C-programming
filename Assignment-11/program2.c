//write program which accept range from user and display all even  numbers in between 

#include<stdio.h>
void DisplayEven(int iNO1,int iNO2)
{
    int iCnt =0;

    if(iNO1>iNO2)
    {
        printf("Invalid input\n");
    }
    for(iCnt =iNO1;iCnt<=iNO2;iCnt++)
    {
        if(iCnt % 2==0)
        {
             printf("%d\n",iCnt);
        }
       
    }
    
}
int main()
{
    int iValue1 =0,iValue2 =0;
    printf("Enter the starting point\n");
    scanf("%d",&iValue1);
    printf("Enter the ending point\n");
    scanf("%d",&iValue2);

    DisplayEven(iValue1,iValue2);

    return 0;
}