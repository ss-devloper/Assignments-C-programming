// print MARVELLOUS 5 times on screen 

#include<stdio.h>
void Display(int NO)
{
    int iCnt= 0;
    for(iCnt =1;iCnt<=NO;iCnt++)
    {
        printf("MARVELLOUS\n");
    }
    return;


}

int main()
{
    int no =0;
    printf(" Accept the input from user\n");
    scanf("%d\n",&no);
    Display(no);
    return 0;
}