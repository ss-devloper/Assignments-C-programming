// write a program accept number from user and display its factors in decending order
// input : 12 
// output : 6 4 3 2 1
#include<stdio.h>
void FactReverse(int iNO)
{
    int iCnt =0;
    for(iCnt =(iNO/2);iCnt>=1;iCnt--)
    {
        if(iNO % iCnt ==0)
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iValue =0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    FactReverse(iValue);


    return 0;
}