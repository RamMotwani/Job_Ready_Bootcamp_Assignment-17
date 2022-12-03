#include<stdio.h>
int main()
{
    char s[10]="rama";
    char s2[10];
    int i;
    for(i=0;s[i];i++)
    {
        s2[i]=s[i];
    }
    printf("%s",s2);
    return 0;
}
