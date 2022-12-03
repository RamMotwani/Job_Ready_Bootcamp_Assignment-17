#include<stdio.h>
int main()
{
    char s[10]="rama";
    int i,length;
    for(length=0;s[length]!='\0';length++)
    {
    }
    for(i=length-1;i>=0;i--)
    {
        printf("%c",s[i]);
    }
    return 0;
}
