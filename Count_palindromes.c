#include<stdio.h>
int main()
{
    int n,i,arr[100],r=0,t,d,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
       t=arr[i];
       while(arr[i])
       {
           d=arr[i]%10;
           arr[i]=arr[i]/10;
           r=(r*10)+d;
       }
       if(t==r)
       {
           c++;
       }
       t=0;
       r=0;
    }
    printf("%d",c);
}