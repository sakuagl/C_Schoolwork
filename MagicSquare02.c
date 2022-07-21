#include<stdio.h>

void kisuu(int,int [15][15]);

int main(void)
{
	int i, j, n;
	int x[15][15] = { 0 };

	printf("”’l“ü—Í -> ");
	scanf_s("%d", &n);
	if (3 > n || n > 15)
	{
		printf("Error!\n");
		return 0;
	}

	if (n % 2 == 1)
		kisuu(n,x);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%3d	", x[i][j]);
		}
		printf("\n");
	}
	return 0;
}

//Šï”
void kisuu(int n, int x[15][15])
{
	int i, j = 0, num = 1;
	i = (n - 1) / 2;
	x[i][j] = num;
	num++;

	while (1)
	{
		i = (i + n - 1) % n;
		j = (j + n - 1) % n;
		x[i][j] = num;
		num++;
		if (num % n == 1)
		{
			j += 2;
			i++;
		}
		if (num > n * n)
			break;
	}
}