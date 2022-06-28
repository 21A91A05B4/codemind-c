#include<stdio.h>
int main()
{
    char s[100];
    int i,c,f=0,t,n,m,T;
        scanf("%s",s);
        c=0;
        for(i=0;s[i]!=NULL;i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                c++;    
            }
        }
    if(c==0)
    {
        printf("Doesn't contain digit");
    }
    else
    printf("Contains %d digit",c);
    
  
}