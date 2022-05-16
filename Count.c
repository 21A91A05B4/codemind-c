#include<stdio.h>
int main()
{
    int n,os,es,i,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            es++;
        }
        else
        os++;
    }
    printf("%d %d",es,os);
}