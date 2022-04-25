#include<stdio.h>
#include<math.h>
int count(int n)
{
    int d,c=0;
    while(n)
    {
        d=n%10;
        n=n/10;
        c++;
    }
    return c;
}
int main()
{
    int n,m,c=0,d,s=0;
    scanf("%d",&n);
    c=count(n);
    m=n;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        s=s+pow(d,c);
        c--;
    }
    if(m==s)
    printf("True");
    else
    printf("False");
}