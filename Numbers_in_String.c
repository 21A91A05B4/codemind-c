#include<stdio.h>
int main()
{
    char str[100];
    int i,c,f=0,t,n,m,T;
        scanf("%[^
]s",str);
        int s=0;
        for(i=0;str[i]!=NULL;i++)
        {
            if(str[i]>='0' && str[i]<='9')
            {
                s=s+(str[i]-'0');    
            }
        }
        printf("%d",s);
    
  
}