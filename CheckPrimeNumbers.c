#include<stdio.h>

int main(void)
{
	int i, j, s;

	for (i = 1; i <= 100; i++)
	{
		s = 0;
		for (j = 1; j <= i; j++)
		{
			if (i % j == 0) s++;
		}

		if (s == 2) printf("%d ", i);
	}

	printf("\n");
/*

	int i,j=0,num;
	printf("��������� -> ");
	scanf_s("%d", &num);
	//printf("�� : ");
	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			//printf("%d ", i);
			j++;
		}
	}
	//printf("\n");
	if (j == 2)
		printf("�f���ł�\n");
	else
		printf("�f���ł͂���܂���\n");
*/
	return 0;
}