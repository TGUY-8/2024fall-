#include <stdio.h>
int arr[101];
int main()
{
	int n;
	scanf_s("%d",&n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (n--; n >= 0; n--)
	{
		printf("%d ", arr[n]);
	}
	return 0;
}
