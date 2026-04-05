// write program that accept one number from user and check whether that number is greater than 100 or not
#include<stdio.h>
#include<stdbool.h>
bool CheckWhether(int iNO)
{
    int iMax =100;
    if(iNO < iMax)
    {
        return true;  //samleer
    }
    else 
    {
        return false;
    }

}
int main()
{
    bool bRet = false;
    int iValue =0;
    printf("enter the number\n");
    scanf("%d",&iValue);
    
    bRet = CheckWhether(iValue);
    if(bRet== false)
    {
        printf("Greater");
    }
    else{
        printf("Smaller");
    }

    return 0;
}