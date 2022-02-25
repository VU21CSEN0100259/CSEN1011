#include <stdio.h>
int fact(int );
int main()
{
    int n,r;
    scanf("%d%d",&n,&r);
    if((n+r)<=10)
    {
    int h=(fact(r+1)*fact(r)/(fact(r+1-n)*fact(n)));
    printf("%d",h);
    }
    else
    {
        printf("Invalid ");
    }
    return 0;
}
int fact(int x)
{
    int i,f=1;
    for(i=1;i<=x;i++)
    {
        f=f*i;
    }
    return f;
}
