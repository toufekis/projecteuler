#include <stdio.h>

int main(void)
{

	int sum=0, i;

	for (i=3; i<1000; i++)
	{
		if ((i%3 == 0) || (i%5 == 0))
		{
			sum += i;
		}
	}
	
	printf("sum = %d\n", sum);

	return 0;
}
