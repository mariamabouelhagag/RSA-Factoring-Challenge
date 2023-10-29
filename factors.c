#include <stdio.h>
#include <stdlib.h>

void get_factor(int num)
{
	int i, f1 = 0, f2 = 0;

	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			if (f1 == 0)
			{
				f1 = i;
			}
			else
			{
				f2 = i;
				break;
			}
		}
	}
	printf("%d=2*%d\n", num, factor1);
}

int main(int argc, char *argv[])
{
	int num;

	if (argc != 2)
	{
		return (1);
	}
	FILE *file = fopen(argv[1], "r");

	if (file == NULL)
	{
		printf("Error opening file\n");
		return (1);
	}

	while (fscanf(file, "%d", &num) != EOF)
	{
		get_factors(num);
	}
	fclose(file);
	return (0);
}
