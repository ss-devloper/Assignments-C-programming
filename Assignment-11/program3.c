//write program which accept range from user and display all  numbers in between and return its addition 



#include<stdio.h>
int DisplayAddition(int iNO1,int iNO2)
{
    int iCnt =0;
    int Addition =0;

    if(iNO1>iNO2)
    {
        printf("Invalid input\n");
    }
    for(iCnt=iNO1+1;iCnt<iNO2;iCnt++)
    {
        printf("%d\n",iCnt);
        Addition =Addition+iCnt;

    }
    return Addition;
    
}
int main()
{
    int iValue1 =0,iValue2 =0;
    int iRet =0;
    printf("Enter the starting point\n");
    scanf("%d",&iValue1);
    printf("Enter the ending point\n");
    scanf("%d",&iValue2);

    iRet=DisplayAddition(iValue1,iValue2);
    printf("The addition of numbers in between is :%d\n",iRet);

    return 0;
}