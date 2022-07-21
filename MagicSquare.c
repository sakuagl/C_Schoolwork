#include<stdio.h>

int main(void)
{
	int i = 2, j = 0, num = 1;
	int x[5][5] = {
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
	};

	x[i][j] = num;
	num++;

	for (; 1;)
	{
		i = (i + 4) % 5;
		j = (j + 4) % 5;
		x[i][j] = num;
		num++;
		if (num % 5 == 1)
		{
			j += 2;
			i++;
		}
		if (num > 25)
			break;
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%2d	", x[i][j]);
		}
		printf("\n");
	}

	return 0;
}