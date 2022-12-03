#include<stdio.h>
int main()
{
    char s[10]="rAm@123";
    int i,a=0,d=0,sc=0;
    printf(" %s \n",s);
    for(i=0;s[i];i++)
    {
        if(s[i]>='0' && s[i]<='9')
            d++;
        else if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
            a++;
        else
            sc++;
    }
    printf(" numbers->%d\n alphabets->%d\n special characters->%d",d,a,sc);
    return 0;
}
