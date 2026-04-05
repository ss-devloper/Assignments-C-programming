// write programm which accept the number from user and display its table
#include<stdio.h>
void Display(int iNO)
{
    int iCnt =0;
    int iTable =1;
    for(iCnt =1;iCnt<=10;iCnt++)
    {
        iTable =iNO * iCnt;
        printf("%d\n",iTable);
    }
    
  
}
int main()
{
    int iValue =0;
    
    printf("Enter the number\n");
    scanf("%d",&iValue);

    Display(iValue);

}