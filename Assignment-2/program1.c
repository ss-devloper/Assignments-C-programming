// Accept one  number from user  user and print that number of * on screen 
// using while loop 

#include<stdio.h>
void Display(int iNO)
{
    int iCnt =0;
    if(iNO < 1)
    {
        iNO = -iNO;
    }
    iCnt =1;
    while(iCnt<=iNO)
    {
        printf("*\t");
        iCnt++;
    }
}
int main()
{
    int iValue =0;
    printf("Enter the number\n");
    scanf("%d\n",&iValue);
    Display(iValue);
    return 0;
}