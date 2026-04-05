// accept a number from user and print  factors of that number

#include<stdio.h>
void DisplayFactor(int iNO)
{
    int iCnt =0; 
    if(iNO < 1)
    {
        iNO =-iNO;
    }
    for(iCnt =1;iCnt<=(iNO/2);iCnt++)
    {
        if((iNO % iCnt)==0)
        {
            printf("%d\t",iCnt);
        }
    }

}
int main()
{
    int iValue =0;
    printf("enter the number\n");
    scanf("%d\n",&iValue);

    DisplayFactor(iValue);
    return 0;
}