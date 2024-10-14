//多维数组的输入靠for循环实现
//创建n行m列的二维数组，给x,y-表示输出二维数组的第x行第y列的数字k
#include <stdio.h>
#include <string.h>
int a[101][101];
int main()
{
    int n, m, x, y;
    scanf_s("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        for (int I = 0; I < m; I++)
        {
            scanf_s("%d", &a[i][I]);
        }
    }
    scanf_s("%d %d", &x, &y);
    for (int i = 0; i < m; i++)
        printf("%d ", a[x-1][i]);
    printf("\n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i][y-1]);
    return 0;
}