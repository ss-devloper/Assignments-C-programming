// write program that accept theree numbers and prints its multipkication
#include<stdio.h>
#include<stdbool.h>
int Multiplication(int iNO1,int iNO2,int iNO3)
{
    if(iNO1 |iNO2|iNO3 == 0)
    {
        return 0;
    }
    return (iNO1*iNO2*iNO3);

}
int main()
{
    int iRet = 0;
    int iValue1 =0,iValue2 =0,iValue3 =0;
    printf("enter the the three numbers\n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);
    
     iRet = Multiplication(iValue1,iValue2,iValue3);
    printf("the multiplication of three numbers is : %d",iRet);

    return 0;
}