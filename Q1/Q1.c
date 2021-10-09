#include<stdio.h>

int main()
{
    char ch[1000];
    printf("Enter the value: \n");
    scanf("%s",ch);

    int i=0,x=0,y=0;

    while(ch[i]!='\0')
    {
        if(ch[i]=='.')
        {
            x++;
            if(ch[i+1]!='\0')
            y=1;
        }
        i++;
    }
    
    if(x==1 && y==1)
    printf("Valid\n");
    else
    printf("Invalid\n");
}