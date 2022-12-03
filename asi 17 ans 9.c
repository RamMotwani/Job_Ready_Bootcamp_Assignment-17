#include<stdio.h>
int main()
{
    char s[10]="ram";
    int sort[150]={0};
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        sort[s[i]]++;
    }
    for(i=0;i<150;i++)
    {
        if(sort[i]>0)
        {
           printf("%c",i);
        }
    }


}
