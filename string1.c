//给定字符串，输出长度
#include <stdio.h>
#include <string.h>
char arr[101];//全局数组被默认初始化为0
int main()
{
    scanf("%s",arr);//该方式遇空格会停止，所以无法输入空格
    int len=strlen(arr);//strlen计算时不会包含\0
    printf("%d",len);
    return 0;
}