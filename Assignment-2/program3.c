// accept the number from user if the number is less than 10 then print "HELLO" otherwise print("DEMO")

#include<stdio.h>
void Display(int iNO)
{
    if(iNO >= 10)
    {
        printf("Demo\n");
    }
    else if(iNO >=1 && iNO<10)
    {
        printf("Hello\n");
    }
}
int main()
{
    int iValue =0;
    printf(" Enter the number\n");
    scanf("%d\n",&iValue);
    Display(iValue);
}