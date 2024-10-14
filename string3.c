//给定一个n，使得在接下来的n行，每一行输入一串字符串，打印每一行首字母
#include <stdio.h>
#include <string.h>
char arr[101];
int main()
{
    int n;
    scanf("%d",n);
    while(n--)
    {
        scanf("\n%[^\n]",arr);
        printf("%c",arr[0]);
    }
    return 0;
}
//scanf函数的工作过程：用户输入内容被存到缓冲区，scanf实际作用是读出缓冲区的内容
//[^\n]这一指令告诉scanf函数读取一串字符串直到遇到\n,'^'表示非
//问题在于\n会留在缓冲区中，导致下一次再输入时输不进
//解决：通过开头的\n，告诉函数忽略前面的\n,实现多行输入