#include<stdio.h>
int main()
{
    int n,sum=0,d;
    scanf("%d",&n);
    while(n>0 || sum>9)
    {
        if(n==0)
        {
            n=sum;
            sum=0;
        }
        else
        {
            d=n%10;
            sum=sum+d;
            n=n/10;
        }
    }
    printf("%d",sum);
}