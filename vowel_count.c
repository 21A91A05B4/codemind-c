#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int c=0,i;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'  )
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}