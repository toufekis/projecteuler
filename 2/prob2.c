#include <stdio.h>
#include <stdbool.h>

int fibo(void);
bool check(int number);
int loop(int max);


int main(void)
{
	int max = 4000000;
	
	printf("sum = %d\n", loop(max));

	return 0;
}

int fibo(void)
{
	int f3;
	static int f1=1, f2=2;
	

	f3 = f1 + f2;

	f1 = f2;
	f2 = f3;
	
	return f3;
}

bool check(int number)
{
	bool answer=false;

	if (number % 2 == 0) 
	{
		answer = true;
	}

	return answer;
}

int loop(int max)
{
	int f=0, sum=2;

	while (f<=max)
	{
		if (check(f))	sum += f;

		f = fibo();
	}

	return sum;
}

