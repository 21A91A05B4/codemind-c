#include<stdio.h>
int main()
{
    int T,t,l,r,c=0,i;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%d%d",&l,&r);
        c=0;
        for(i=l;i<=r;i++)
        {
            if(i%10==2 || i%10==3 || i%10==9)
            {
                c++;
            }
        }
        printf("%d
",c);
    }
}