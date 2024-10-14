#include <stdio.h>
struct stu
{
    int serial;
    char name[10];
    int id[7];
    int age;
}
typedf struct stu stu;
stu info[55]
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i--)
    {
        scanf("%d%s%d%d",&info[i].serial,&info[i].name,&info[i].id,&info[i].age);
    }
    for(int i=n-1;i>=0;i--)
    {
        printf("%d %s %d %d\n",info[i].serial,info[i].name,info[i].id,info[i].age);
    }
    return 0;
}
//结构体的大小=各部分大小的和
//声明结构体变量，例info[20]表示内存为20个结构体大小