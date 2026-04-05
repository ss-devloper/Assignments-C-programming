// accept a number from user and print **even factors of that number
#include<stdio.h>
void DisplayEvenFactors(int iNO)
{
    int i =0;
    if(iNO < 0)
    {
        iNO =-iNO;
    }
    for(i=1;i<=(iNO/2);i++)
    {
        if(((iNO % i)==0) && ((i % 2)==0))
        {
            printf("%d\n",i);
        }
    }
}
int main()
{

    int iValue =0;
    printf("enter the number\n");
    scanf("%d\n",&iValue);

    DisplayEvenFactors(iValue);
    return 0;
}