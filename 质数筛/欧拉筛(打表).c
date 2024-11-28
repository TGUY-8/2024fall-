
//欧拉筛
#include <stdio.h>
#include <stdbool.h>

bool is_prime[10000]; //能判断1-10000范围内的数是否为质数，主函数外初始化为false
int prime[10000];
int euler_s(int n);

int main()
{
	int n;
	scanf("%d" , &n);
	int num = euler_s(n);
	printf("%d\n" , num);
	for(int i = 0 ; i < num ; i++)
	{
		printf("%d\n" , prime[i]);
	}
	return 0;
}

int euler_s(int n)            
{
	int count = 0;
	for(int i = 2 ; i <= n; i++)       //每扫过一个数，就筛掉这个数与当前质数表中数的乘积
	{
		if(! is_prime[i]) //如果i是质数
		{
			prime[count++] = i ; //将遍历到的这个质数放入质数表
		}
		for(int j = 0 ; j < count && i*prime[j] <= n ; j++) //用当前i乘以已经存入的质数
		{
			is_prime[i*prime[j]] = true;     //乘积一定为合数，同时for循环的条件保证乘积一定在范围内
			if(i % prime[j] == 0)            //欧拉筛的精髓在于让每个合数被它的最小质因子标记 ， 而如果i%prime[j] == 0
			                                 //则，i是prime[j]的倍数，所以后续的i*prime[j+k]也一定能写成后面遍历到的i_*prime[j]
			break;
		}
	}
	return count;
}

//正整数的唯一分解定理 ， 即：每个大于1的自然数，要么本身就是质数，要么可以且仅可以以一种方式表示为多个质数的乘积
//总结：一个合数一定等于它的最小质因子（一个质数）×另一个数k，那么用循环遍历i模拟k,同时在保证i不为比当前质数小的某个质数的倍数时，标记到的合数一定是以最小质因子*k的形式表示的
