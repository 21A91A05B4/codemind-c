#include<stdio.h>
#include<math.h>
int main()
{
    int a[100],f,s=0,c=0,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            s=s+a[i];
        }
        else
        {
            c=c+a[i];
        }
    }
    f=abs(s-c);
    printf("%d",f);
    
}