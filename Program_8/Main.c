/*
    Accept character from user. If it is capital then display all the
characters from the input characters till Z. If input character is small
then print all the characters in reverse order till a. In other cases
return directly.
Input : Q
Output : Q R S T U V W X Y Z
Input : m
Output : m l k j i h g f e d c b a
Input : 8
Output :
*/

#include<stdio.h>
void Display(char cValue)
{
    int i=0;
    if(cValue>='A' && cValue<='Z')
    {
        while(cValue<='Z')
        {
            printf("%c\t",cValue);
            cValue++;
        }
     
    }
    else if(cValue>='a' && cValue<='z')
    {
        while(cValue>='a')
        {
            printf("%c\t",cValue);
            cValue--;
        }
        
    }
    else
    {
        printf(" ");
    }
} 
int main()
{
    char ch='\0';
    
    printf("enter the character");
    scanf("%c",&ch);
    Display(ch);
   
    return 0;
}
