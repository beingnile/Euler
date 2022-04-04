#include <stdio.h>

int main(void)
{
	int i;
	int sum;

	for (i = 0; i < 1000; ++i)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
