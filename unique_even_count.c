#include<stdio.h>
int main()
{
    int a[100],n,i,b[100],s=0,k=0,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   // scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            b[k]=a[i];
            k++;
        }
    }
    for(i=0;i<k;i++)
    
    {
        for(j=0;j<k;j++)
        {
            if (b[i]==b[j] && i!=j)
            {
                b[j]=-1;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        if(b[i]!=-1)
        {
            c++;
        }
    }
    printf("%d",c);
}
    