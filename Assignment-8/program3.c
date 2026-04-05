// Accept single digit number from user and print it into word
// by using array
#include<stdio.h>

void Dipslay(int iNO)
{
     char *Arr[] ={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

     if(iNO >=0 && iNO<=9)
    {
        printf("%s\n",Arr[iNO]);
    }
    else 
    {
        printf("Invalid input");
    }

}
int main()
{
    // String Arr[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    // C does not have string type string its in java
    int iValue= 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    Dipslay(iValue);
    return 0;
}