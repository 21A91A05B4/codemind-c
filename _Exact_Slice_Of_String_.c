#include<stdio.h>
int main()
{
    char str[100];
    int i,c=0,f=0,t,n,m,T;
    scanf("%[^
]s",str);
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;str[i]!=NULL;i++)
    {
        if(i>=n&& i<=m)
        {
            printf("%c",str[i]);
        }
    }
    
}