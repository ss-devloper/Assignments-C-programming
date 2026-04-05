// Accept range from user and display in betweens numbers in reverse order 
#include<stdio.h>
void DisplayInReverse(int iNO1,int iNO2)
{
    int iCnt =0;
    for(iCnt =iNO2 -1;iCnt>iNO1;iCnt--)
    {
        if(iCnt %2 ==0)
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

    DisplayInReverse(iValue1,iValue2);
    return 0;
}