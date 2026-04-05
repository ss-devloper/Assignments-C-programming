// Accept one charactetr from user and check whether that character is vowel (a,e,i,o,u)or not
#include<stdio.h>
#include<stdbool.h>
bool CheckVowel(char Cvalue)
{
    if(Cvalue == 'a'||Cvalue =='e'||Cvalue =='i'||Cvalue =='o'||Cvalue =='u')
    {
        return true;
    }
    else if(Cvalue == 'A'||Cvalue =='E'||Cvalue =='I'||Cvalue =='O'||Cvalue =='U')
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char ch ='\0';
    bool bRet =false;
    printf("Enter the character\n");
    scanf("%c",&ch);
    bRet =CheckVowel(ch);

    if(bRet)
    {
        
        printf("this is vovwel");
       
    }
    else 
    {
         printf("This is not vowel");
    }
    return 0;
}