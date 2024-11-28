#include <stdio.h>

int array[10001];

int partition(int* a , int l , int r);
int quicksort(int *a , int l , int r);

int main()
{
	int n;
	scanf("%d" , &n);
	for(int i = 0 ; i < n ; i++)
	{
		scanf("%d" , &array[i]);
	}
	quicksort(array , 0 , n-1);
	for(int i = 0 ; i < n ; i++)
	{
		printf("%d " , array[i]);
	}
	return 0;
}

void swap(int *x , int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int quicksort(int *a , int l , int r)
{
	if(r <= l)
		return 0;
	else{
		int pivot = partition(a , l , r);
		quicksort(a , pivot+1 , r);
		quicksort(a , l , pivot-1);
	}
	return 0;
}

int partition(int* a , int l ,int r)
{
	int i = l , j = l;
	int p = (l + r) / 2;
	int std = a[p];
	swap(&a[p] , &a[r]);
	for (; j < r; j++)
	{
		if(a[j] < std)
		{
			swap(&a[i] , &a[j]);
			i++;
		}
	}
	swap(&a[i] , &a[r]);
	return i;
}
