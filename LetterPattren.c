#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    char ch='A';
    char ch1='a';
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
        printf("%2c%c",ch,ch1);
        ch++;
        ch1++;
       }
    printf("\n");
    }
}