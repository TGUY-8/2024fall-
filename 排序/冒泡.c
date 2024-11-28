//冒泡排序，从小到大
#include <stdio.h>

int array[10000]; //变量做数组声明时大小在C99后才允许

void bubble_sort(int* a , int len);

int main()
{
	int n;
	scanf("%d" , &n);
	for(int i = 0; i < n ; i++)
	{
		scanf("%d" , &array[i]);
	}
	bubble_sort(array , n);
	for (int  i = 0; i < n; i++)
	{
		printf("%d " , array[i]);
	}
	
	return 0;
}

void swap(int* x , int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void bubble_sort(int* a , int len)
{
	for(int i = 0 ; i < len - 1 ; i++)
	{
		for(int j = 0 ; j < len - i - 1 ; j++)
		{
			if(a[j] > a[j+1])
			swap(&a[j] , &a[j+1]);
		}
	}
}
