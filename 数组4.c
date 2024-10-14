//给定一个长度为n的数组a，进行m此修改，每次把第x个数修改为k,最后正序输出数组
int arr[101];
int main()
{
	int n,m;
	scanf_s("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	while (m--)
	{
		int x,k;
		scanf_s("%d %d", &x,&k);
		arr[x - 1] = k;
	}
	for (int i = 0; i < n; i++)
		printf("%d", arr[i]);
	return 0;
}
