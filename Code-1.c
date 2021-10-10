#include<stdio.h>

int main()
{
    char s[1000];
    printf("Enter the value\n");
    scanf("%s",s);
    int i=0;
    int c=0,d=0;
    while(s[i]!='\0')
    {
        if(s[i]=='.')
        {
            c++;
            if(s[i+1]!='\0')
            d=1;
        }
        i++;
    }
    if(c==1 && d==1)
    printf("Valid\n");
    else
    printf("Invalid\n");
}
