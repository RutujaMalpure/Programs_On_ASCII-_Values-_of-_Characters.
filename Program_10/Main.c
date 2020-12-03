/*
    Accept character from user and display its ASCII value in decimal,
octal and hexadecimal format.
Input : A
Output : Decimal 65
        Octal 0101
        Hexadecimal 0X41    
    

*/
#include<stdio.h>

int Display(char cValue)
{
    printf("Decimal %d\n",cValue);
    printf("Hexadecimal %h\n",cValue);
    printf("Octal %o\n",cValue);
}
int main()
{
    char ch='\0';
    printf("enter the character");
    scanf("%c",&ch);
    Display(ch);
    
    return 0;
}
