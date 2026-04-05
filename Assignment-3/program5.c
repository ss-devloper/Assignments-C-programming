// Accept the character from user like a  and convert the case of that charactr like A
// 1 at method : use in built toupper() from ctype.h
// 2 method : conversion manually using Ascii

#include<stdio.h>
#include<ctype.h>
void DisplayConvert(char cValue)
{
    char converted ='\0';

    if((cValue >='a') && (cValue <='z'))
    {
        char converted =cValue-32;
        printf("%c\n",converted);
    }
    else if((cValue>='A')&&(cValue<='Z'))
    {
        char converted =cValue+32;
        printf("%c\n",converted);
    }
}

int main()
{
    char ch ='\0';
    printf("Enter the character\n");
    scanf("%c",&ch);

    DisplayConvert(ch);


}