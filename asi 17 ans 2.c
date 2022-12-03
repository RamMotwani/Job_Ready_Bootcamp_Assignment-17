#include<stdio.h>
int main()
{
    char s[10]="rama";
    int occur[150]={0};
    int i,j;
    for(i=0;s[i]!='\0';i++)
    {
        occur[s[i]]++;
    }
    for(i=0;i<150;i++)
    {
        if(occur[i]>0)
        {
            printf("%c is %d times\n",i,occur[i]);
        }
    }
    return 0;



}
