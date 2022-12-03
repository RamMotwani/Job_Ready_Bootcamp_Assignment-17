#include<stdio.h>
int main()
{
    char s[10]="ram";
    char s2[11]={'a','e','i','o','u','A','E','I','O','U','\0'};
    int vovel[120]={0};
    int i,j,sum=0;
    for(i=0;s[i]!='\0';i++)
    {
        for(j=0;s2[j]!='\0';j++)
        {
            if(s[i]==s2[j])
            {
                vovel[s[i]]++;
            }
        }
    }
    for(i=0;i<120;i++)
    {
        if(vovel[i]>0)
        {
            sum=sum+vovel[i];
        }
    }
    printf("your character string have %d vovel",sum);
}
