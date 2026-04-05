// accept N and print first 5 multiples of N
// iNO * 1,2,3,4,5
#include<stdio.h>
void Display(int iNO)
{  
    int mult =0;
    int iCnt =0;
    for(iCnt =1;iCnt<=5;iCnt++)
    {
        mult =iNO * iCnt;

        printf("%d\t",mult);
    }
}
int main()
{
    int iValue =0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}