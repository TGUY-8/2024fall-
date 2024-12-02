#include <stdio.h>
#include <stdlib.h>

long long N[100001];

void Qs(long long*a , int l , int r);

int main()
{
	int n;
	scanf("%d" , &n);
	for (int i = 0; i < n; i++)
	{
	scanf("%lld" , &N[i]);
	}
	Qs(N , 0 , n-1);
	for (int i = 0; i < n; i++)
	{
		printf("%lld " , N[i]);
	}
	return 0;
}

void swap(long long* a , long long* b)
{
	long long temp = *a;
	*a = *b;
	*b = temp;
}


void Qs(long long*a , int l , int r)
{
if(l>=r) return;
	int i=l-1,j=r+1;
	long long std=a[l+rand()%(r-l+1)];
	while(i<j){
		do i++; while(a[i]<std);
		do j--; while(a[j]>std);
		if(i<j) swap(&a[i],&a[j]);
	}
	Qs(a , j+1 , r);
	Qs(a , l , j);	
}
