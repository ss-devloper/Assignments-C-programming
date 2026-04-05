// accept two numbers from user and find out which is max return max

#include<stdio.h>
int CheckMax(int a,int b)
{
    int iMax = a-b;
    if(iMax < 0)
    {
        iMax = b;
    }
    return iMax;
}
int main()
{
    int iMaximum =0;
    int iValue1 =0,iValue2 =0;
    printf("Enter the first  number\n");
    scanf("%d",&iValue1);

    printf("Enter the second  number\n");
    scanf("%d",&iValue2);
    iMaximum =CheckMax(iValue1,iValue2);
    printf(" The maximum number is : %d\n",iMaximum);

    
    return 0;
}