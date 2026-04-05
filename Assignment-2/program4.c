// aceept two numbers from user and display first number in second number of times 

#include<stdio.h>
void Display(int iNO1, int iNO2)
{
    int iCnt =0;
    for(iCnt =1;iCnt<=iNO2;iCnt++)
    {
        printf("%d\n",iNO1);
    }
}
int main()
{
    int iValue1 =0,iValue2 =0;
    printf("Enter the first number\n");
    scanf("%d\n",&iValue1);

    printf("Enter the second number\n");
    scanf("%d\n",&iValue2);

    Display(iValue1,iValue2);
}