#include<stdio.h>
int main()
{
    char s[10]="RAM";
    int i;
    for(i=0;s[i]!='\0';i++)
    {

        if(s[i]>='A' && s[i]<='Z')
            s[i]=s[i]+32;

    }
    printf("%s",s);
    return 0;

}

