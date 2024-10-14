//strstr(a,b)函数,如果b是a的子串，返回b在a中第一次出现的首字母地址，否则返回NULL
//已知字符串s，现给n个字符串，计算多少个字符串是s的子串
#include <stdio.h>
#include <string.h>
char s[101],a[101];
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%[^\n]",a);
        if(strstr(s,a)!=NULL)
            sum++;
    }
    printf("%d",sum);
    return 0;
}