#include<stdio.h>

int main()
{
    char s[1000];
    scanf("%s",s);

    int i=0;
    int ch=0;
    int c=0;
    int x=-1,y=-1;
    
    while(s[i]!='\0')
    {
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))
            ch=1;
        else if((s[i]=='.' || s[i]=='-'  || s[i]=='_' || s[i]=='@') && (i!=0 && s[i+1]!='\0'))
            ch=1;
        else
        {
            ch=-1;
            break;
        }
        if(s[i]=='@')
        {
            c++;
            x=i;
        }
        if(c>1)
        {
            ch=-1;
            break;
        }
        if(s[i]=='.')
        {
            y=i;
        }
        i++;
    }
    if(y-x<2)
        ch=-1;
    if(ch==1)
        printf("Valid Email Address\n");
    else
        printf("Invalid Email Address\n");
}