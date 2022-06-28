#include<stdio.h>
int main()
{
    char str[100];
    int i,c=1,f=0,t,n,m,T;
        scanf("%[^
]s",str);
        for(i=0;str[i]!=NULL;i++)
        {
            if(str[i]==' ')
            {
                c++;    
            }
        }
        printf("%d",c);
    
  
}