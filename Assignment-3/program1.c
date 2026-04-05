// write a program which accept one number from user and print that number of even numbers on screen
// Input : 7 
// output : 2 4 6 8 10 12 14
// not getting output search on it

#include<stdio.h>
void PrintEven(int iNO)
{
   
    // updator
    if(iNO <=0)
    {
        return;
    }
int iCount= 0;
int iCnt =0;
for( iCnt =0,iCount=0;iCount<=iNO;iCnt=iCnt+2)
{

    if((iCnt % 2)==0)
    {

        printf("%d\n",iCnt);
            iCount++;
    }
    
}
    
}
int main()
{
    int iValue =0;
    printf("Enter the number\n");
    scanf("%d\n",&iValue);

    PrintEven(iValue);
    return 0;
}