// find largest among three numbers 
#include<stdio.h>
void CheakLarge(int a,int b,int c)
{
    int iMax =a;
    if(iMax < b)
    {
        iMax =b;

         if(c > iMax)
        {
            iMax =c;
        }
    }
    
    printf(" the maximum number is : %d",iMax);
    

}
int main()
{
    int iValue1 =0,iValue2 =0,iValue3 =0;
    
    printf("enter the first numbers\n");
    scanf("%d\n",&iValue1);
    
    printf("Enter second number\n");
    scanf("%d\n",&iValue2);

    printf("enter the third number\n");
    scanf("%d\n",iValue3);

    CheakLarge(iValue1,iValue2,iValue3);

    return 0;
}