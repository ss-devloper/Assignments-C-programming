// write program that accept two numbers and check are they equal or not
#include<stdio.h>
#include<stdbool.h>
bool CheckWhether(int iNO1,int iNO2)
{
    if(iNO1 == iNO2)
    {
        return true;  // equals
    }
    else 
    {
        return false;
    }

}
int main()
{
    bool bRet = false;
    int iValue1 =0,iValue2 =0;
    printf("enter the first number\n");
    scanf("%d",&iValue1);

    printf("enter the second number\n");
    scanf("%d",&iValue2);
    
    
    bRet = CheckWhether(iValue1,iValue2);
    if(bRet== false)
    {
        printf("Not euqals");
    }
    else{
        printf("equals");
    }

    return 0;
}