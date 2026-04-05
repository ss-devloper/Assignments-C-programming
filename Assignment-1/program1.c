// program to devide two numbers 

#include<stdio.h>
int Devide(int iNO1,int iNO2)
{
    int iANS =0;
    // buissness logic 
    if(iNO2 > iNO1)
    {
        return -1;
    }
    iANS =iNO1 / iNO2;

    return iANS;
}
int main()
{
    int iRet= 0;
    int iValue1 = 0;
    int iValue2 =0;
    iRet =Devide(&iValue1,&iValue2);
    printf("Divisoin of two numbers is : %d\n",iRet);

    return 0;
}