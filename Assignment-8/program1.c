// accept number iNO if iNO<50 print small ,if iNO>50 and <100 medium if iNO>100 large 

#include<stdio.h>
#include<stdbool.h>
void CheckWhether(int iNO)
{
    if(iNO < 50)
    {
        printf("small");
    }
    else if(iNO>50 && iNO<100)
    {
        printf("medium");
    }
    else if(iNO>100)
    {
        printf("large");
    }
}
int main()
{
    int iValue =0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    CheckWhether(iValue);
    return 0;
}