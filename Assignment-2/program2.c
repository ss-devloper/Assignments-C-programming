// accept one number from user and print that number of * on screen using while loop 
#include<stdio.h>
void Display(int iNO)
{
    
    while(iNO>=1)
    {
        printf("*\t");
        iNO--;
    }
}
int main()
{
    int iValue =0;
    printf("Enter the number of elements\n");
    scanf("%d\n",&iValue);
    Display(iValue);
}
