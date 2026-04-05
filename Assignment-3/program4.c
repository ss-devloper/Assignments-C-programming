// Accept the character from user like a  and convert the case of that charactr like A
// 1 at method : use in built toupper() from ctype.h

#include<stdio.h>
#include<ctype.h>
void DisplayConvert(char cValue)
{
    char big ='\0';
    big =toupper(cValue);
    printf("%c",big);
}
int main()
{
    char ch ='\0';
    printf("Enter the character\n");
    scanf("%c",&ch);

    DisplayConvert(ch);


}