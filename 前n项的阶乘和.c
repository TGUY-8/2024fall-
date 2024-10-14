#include <stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++)
    {
        int t=1;
        for(j=1;j<=i;j++)
        {
            t=t*j;
        }
        sum+=t;
    }
    printf("%d",sum);
    return 0;
}