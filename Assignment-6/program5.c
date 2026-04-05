// accept total marks and obtained marks and calculate percentage 
#include<stdio.h>
float Percentage(int iNO1,int iNO2)
{
    return ((float)iNO2 / iNO1)*100 ;
}
int main()
{
    int iValue1 =0,iValue2 =0;
    float fRet =0.0f;
    printf("Enter the total marks\n");
    scanf("%d",&iValue1);

    printf("Enter the obtained marks\n");
    scanf("%d",&iValue2);
    fRet = Percentage(iValue1,iValue2);

    printf("the percent of marks is : %.2f%%",fRet);
    return 0;
}