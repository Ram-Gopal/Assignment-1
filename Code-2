#include<stdio.h>

int main()
{
    char s[1000];
    scanf("%s",s);
    int i=0,c=0,d=0;
    int x1=-1,x2=-1;
    while(s[i]!='\0')
    {
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))
            c=1;
        else if((s[i]=='.' || s[i]=='-'  || s[i]=='_' || s[i]=='@') && (i!=0 && s[i+1]!='\0'))
            c=1;
        else
        {
            c=-1;
            break;
        }
        if(s[i]=='@')
        {
            d++;
            x1=i;
        }
        if(d>1)
        {
            c=-1;
            break;
        }
        if(s[i]=='.')
        {
            x2=i;
        }
        i++;
    }
    if(x2-x1<2)
        c=-1;
    if(c==1)
        printf("Valid Email address\n");
    else
        printf("Invalid Email address\n");
}
