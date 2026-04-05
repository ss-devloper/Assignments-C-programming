// check leap year
// century yr :   having last digit 00
// non century yr:  other than that like 1,2,3..
// if yr is century % 400 == 0  : LEAp uyr
// if not % 4 ==0 : leap yr

#include<stdio.h>
void CheckYear(int iNO)
{
    int iDigit =0;
    iDigit = iNO % 100;
    if(iDigit ==0)
    {
        if(iNO % 400 ==0)
        {
            printf(" the year is leap year\n");
        }
        else 
        {
            printf(" the year is normal year\n");
        }
    }
    else 
    {
        if(iNO % 4 !=0)
        {
            printf("the year is normal year\n");
        }
        else 
        {
            printf("the yrear is leap year\n");
        }
    }
    
    
}
int main()
{
    int iYear =0;
    printf(" enter the year\n");
    scanf("%d",&iYear);
    CheckYear(iYear);
    return 0;
}