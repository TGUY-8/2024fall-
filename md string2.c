//创建一个n行m列的数组，倒序输出
#include <stdio.h>
#include <string.h>
int a[101][101];
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-1;j>=0;j--)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}