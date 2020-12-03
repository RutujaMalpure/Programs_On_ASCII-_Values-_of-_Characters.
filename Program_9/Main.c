/*
    Accept Character from user and check whether it is special symbol
or not (!, @, #, $, %, ^, &, *).
Input : %
Output : TRUE
Input : d
Output : FALSE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
int ChckSpecail(char cValue)
{
    if((cValue>='A' && cValue<='Z')||(cValue>='a' && cValue<='z')||(cValue>=0 && cValue<=9))
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}
int main()
{
    char ch='\0';
    BOOL iRet=FALSE;
    printf("enter the character");
    scanf("%c",&ch);
    iRet=ChckSpecail(ch);
    if(iRet==TRUE)
    {
        printf("it is an Special sysmbol");
    }
    else
    {
        printf("It is not an  Special sysmbol");
    }
}
