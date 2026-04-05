// Write a programm to find factorial of given numbers
// as factoruial grows very fast with every next number so what happen : overflow
// we can use long long but here alsoupto 20 we can do 
// so the best way is use array here i.e store each number in reverse format


#include<stdio.h>
int Display(int iNO)
{
    int iCnt =0;
    int Arr[500]={"\0"};
    int iSize =1;

    Arr[0]=1;
    for(iCnt =2;iCnt<=iNO;iCnt++)
    {
        int Carry =0;
        for(int j =0;j<iSize;j++)
        {
            
        }
    }


}
int main()
{

    int iRet =0;
    int iValue =0;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    iRet=Display(iValue);
    printf("THe factorial is : %d",iRet);

}