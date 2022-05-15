#include<stdio.h>
int main()
{
    int n,i,arr[100],fc=0,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        fc=0;
            for(j=1;j<=arr[i];j++)
            {
                if(arr[i]%j==0)
                {
                    fc++;
                }
            }
            if(fc==2)
            {
                c++;
            }
        
    }
    printf("%d",c);
}