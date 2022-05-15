#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int c=0,i=0;
    scanf("%[^
]s",str);
    while(str[i]!=NULL)
    {
        i++;
        c++;
    }
    printf("%d",c);
    return 0;
}