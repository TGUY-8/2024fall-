//判断b是不是a的子串
#include <stdio.h>
#include <string.h>
char a[101], b[101];
int main()
{
	scanf_s("%[^\n]", a);
	scanf_s("\n%[^\n]", b);
	int na = strlen(a), nb = strlen(b);
	int x = na - nb;
	int trait = 0;
	for (int i = 0; i <= x; i++)
	{
		int chosen = i + nb;
		int n = i;
		for (; n < chosen; n++)
		{
			if (b[n - i] != a[n])
				break;
			if (n == chosen - 1)
				trait = 1;
		}
		if (trait == 1)
			break;
	}
	if (trait)
		printf("b是a的子串");
	else
		printf("b不是a的子串");
	return 0;
}
