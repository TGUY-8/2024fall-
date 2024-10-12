//给定测试次数T，给定含n个正整数的数组，询问q次，每次询问数组中等于x的数字有多少个
int arr[101];
int main()
{
	int T;
	scanf_s("%d", &T);
	while (T--)
	{
		int n, q,num=0;
		scanf_s("%d %d", &n, &q);
		for (int i = 0; i < n; i++)
		{
			scanf_s("%d", &arr[i]);
		}
		while (q--)
		{
			int x;
			scanf_s("%d", &x);
			for (int t = 0; t < n; t++)
			{
				if (arr[t] == x)
					num++;
			}
		}
		printf("%d\n", num);
	}
	return 0;
}
