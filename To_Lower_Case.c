#include<stdio.h>
int main()
{
    char str[100];
    int i,c=0,f=0,t,n,m,T;
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
    }
    printf("%s",str);
    
}