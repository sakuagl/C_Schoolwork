#include<stdio.h>

int main(void)
{
	int A, B, C;
	for (A = 1; A <= 15; A++)
	{
		for (B = 1; B <= 15; B++)
		{
			for (C = 1; C <= 15; C++)
			{
				if (A*A==(B*B)+(C*C))
					printf("%2d %2d %2d\n", A, B, C);
			}
		}
	}
	return 0;
}