#include<stdio.h>
int main()
{
    int i,n,a[100],c,t,d,k=1,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        c=0;
        t=a[i];
        if(a[i]==0)
        {
            c=1;
        }
        while(t!=0)
        {
            c++;
            d=t%10;
            t=t/10;
        }
        if(k<c)
        {
            k=c;
        }
    }
    for(i=0;i<=n-1;i++)
    {
        c=0;
        t=a[i];
        if(a[i]==0)
        {
            c=1;
        }
        while(t!=0)
        {
            c++;
            d=t%10;
            t=t/10;
        }
        if(c==k)
        {
            printf("%d ",a[i]);
        }
    }
   // printf("%d",x);
    
}