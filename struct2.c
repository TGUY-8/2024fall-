//交换学生信息中第a人和第b人的信息
#include <stdio.h>
struct stu
{
    int serial;
    char name[10];
    int id[8];
    int age;
}
typedf struct stu stu;
stu info[55];
void swap(*x,*y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d%s%d%d",&info[i].serial,&info[i].name,&info[i].id,&info[i].age);
    }
    while(m--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        swap(&info[a].serial,&info[b].serial);
        swap(&info[a].name,&info[b].name);
        swap(&info[a].id,&info[b].id);
        swap(&info[a].age,&info[b].age);
    }
    return 0;
}