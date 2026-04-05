// Accept one number from user and print that number of * on screen

#include<stdio.h>
void Display(int iNO)
{
    int iCnt =0;
    if(iNO < 1)
    {
        printf("Invalid input\n");
    }
    for(iCnt =1;iCnt<=iNO;iCnt++)
    {
         printf("*\t");
    }
   
}
int main()
{
    int iValue=0;
    printf(" Enter the number\n");
    scanf("%d\n",&iValue);
    Display(iValue);
    return 0;
}