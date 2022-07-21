#include<stdio.h>
int GCM(int,int);
int main(void)
{
	int k,m, n, x, y;
	printf("x = ");
	scanf_s("%d", &x);
	printf("y = ");
	scanf_s("%d", &y);

	m = (x > y) ? x : y;
	n = (x > y) ? y : x;

	k=GCM(m, n);

	printf("GCM = %d\n", k);
	return 0;
}

int GCM(int m, int n)
{
	int l = m % n;
	if (l != 0)
	{
		m = n;
		n = l;
		return GCM(m, n);
	}
	else
		return n;
}