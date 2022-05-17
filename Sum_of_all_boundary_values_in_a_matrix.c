#include<stdio.h>
int main()
{
    int i,j,r,c,s=0,a[100][100];
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==0 || i==r-1 || j==0 || j==c-1)
            {
                s=s+a[i][j];
            }
        }
    }
    printf("%d",s);
}