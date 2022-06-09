#include<stdio.h>
int main()
{
    int n,i,j,k,c=0,s=0,dc=0,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                c++;
            }
        }
        if(c==0)
        {
            s=s+arr[i];
        }
    }
    
    printf("%d",s);
}