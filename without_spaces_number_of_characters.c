#include<stdio.h>
int main()
{
    char str[100],i;
    int ch=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        continue;
        else
        ch++;
    }
    printf("%d",ch);
}