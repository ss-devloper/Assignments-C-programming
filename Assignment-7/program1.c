// accept number from user and print that number of $ & * on screen 
// input 5 
// output: $ * $ * $ * $ * $ *

#include<stdio.h>
void Pattern(int iNO)
{
    if(iNO < 1)
    {
        iNO = -iNO;
    }
    int iCnt =0;
    for(iCnt =1;iCnt<=iNO;iCnt++)
    {
        printf("$\t*\t",iCnt);
    }
}
int main()
{
    int iValue1 =0;
    printf("enter the number\n");
    scanf("%d",&iValue1);
    Pattern(iValue1);
    return 0;
}