/*
    Accept character from user. If character is small display its
corresponding capital character, and if it small then display its
corresponding capital. In other cases display as it is.
Input : Q
Output : q
Input : m
Output : M
Input : 4
Output : 4
*/
#include<stdio.h>

void Convert(char cValue)
{
     if(cValue>='A' && cValue<='Z')
        {
            cValue=cValue+32;
        }
        else if(cValue>='a'&& cValue<='z')
        {
            cValue=cValue-32;
        }
        else
        {
           cValue=cValue;
        }
    
    printf("%c",cValue);
}
int main()
{
    char ch='\0';
    
    printf("enter the character");
    scanf("%c",&ch);
    Convert(ch);
   
    return 0;
}
