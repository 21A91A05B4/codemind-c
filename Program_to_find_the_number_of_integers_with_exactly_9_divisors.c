#include<stdio.h>
int div(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(div(i)==9)
        {
            printf("%d ",i);
            count++;
        }
    }
    printf("
");
    printf("Total=%d ",count);
}