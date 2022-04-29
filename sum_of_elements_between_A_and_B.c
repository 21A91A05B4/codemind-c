#include<stdio.h>
int main()
{
    int n,arr[100],n1,n2,i,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&n1,&n2);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=n1 && arr[i]<=n2)
        {
        s=s+arr[i];
        }
        
    }
    printf("%d",s);
}