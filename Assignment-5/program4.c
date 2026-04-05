// check the number is positive ,negative or 0
#include<stdio.h>
void CheckNUmber(int iNO)
{
    if(iNO == 0)
    {
        return;
    }
    else if(iNO < 0)
    {
        printf("the number is negative\n");
    }
    else 
    {
        printf(" the number is positive\n");
    }
}
int main()
{
    int iValue =0;
    printf(" Enter the number\n");
    scanf("%d",&iValue);
    CheckNUmber(iValue);

    return 0;
}