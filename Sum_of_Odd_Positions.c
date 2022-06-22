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
        if(i%2!=0)
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
    
}