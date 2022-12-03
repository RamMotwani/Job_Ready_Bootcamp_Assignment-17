#include<stdio.h>
int main()
{
    char s[10]="ramaji";
    int freq[150]={0};
    int i;
    for(i=0;s[i];i++)
    {
        freq[s[i]]++;
    }
    for(i=0;i<150;i++)
    {
        if(freq[i]>0)
        {
            printf("%c -> %d\n",i,freq[i]);
        }
    }
}
