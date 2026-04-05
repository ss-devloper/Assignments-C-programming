// input : 5
// output: * * * * * # # # # #
#include<stdio.h>
void Display(int iNO)
{
    int iCnt =0;
    for(iCnt =1;iCnt<=iNO;iCnt++)
    {
        printf("*\t#\t",iCnt);
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