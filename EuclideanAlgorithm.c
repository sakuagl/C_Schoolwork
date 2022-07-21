#include<stdio.h>

int main(void)
{
	int k, l, m, n,x,y;
	printf("x = ");
	scanf_s("%d", &x);
	printf("y = ");
	scanf_s("%d", &y);
	
	m = (x > y) ? x : y;
	n = (x > y) ? y : x;

	while (1)
	{
		l = m % n;
		if (l == 0)
		{
			k = n;
			break;
		}
		m = n;
		n = l;
	}

	printf("GCM = %d\n", k);

	return 0;
}