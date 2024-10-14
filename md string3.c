//给k个n行m列的二维数组，将他们依次叠加起来形成一个三维数组，输出所有x-z面的元素之和
#include <stdio.h>
#include <string.h>
int a[101][101][101];
int main()
{
    int k,n,m;
    scanf("%d %d %d",&k,&n,&m);
    for(int q=0;q<k;q++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                scanf("%d",&a[q][i][j]);
            }
        }
    }
    for(int j=0;j<m;j++)
    {
        int sum=0;
    for(int q=0;q<k;q++)
        {
        for(int i=0;i<n;i++)
            {
            sum+=a[q][i][j];
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}