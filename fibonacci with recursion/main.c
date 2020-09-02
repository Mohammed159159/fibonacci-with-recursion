#include<stdio.h>
#include<stdlib.h>

long long fib(int n);

int main()
{
	int n;
	printf("Enter length of the fibonacci sequence: ");
	scanf_s("%d", &n);

	long long* array = (long long*)malloc(sizeof(long long) * n);

	for (int i = 1; i <= n; i++)
	{
		printf("%lld", fib(i, array));

		if (i != n)
			printf(", ");
	}

}

long long fib(int n, long long array[])
{
	// create a variable to store the the recent fib function values
	long long value;

	// check if n has been called before: I still don't know how to impliment that in c; I have limited dynamical abilities
	for (int i = 0; array[i] != (long long *) array[i]; i++) // but that is what I tried
	{
		if (n <= i)
			return array[n - 1];
	}
	// do the base cases and indention
	if (n == 1 || n == 2)
	{
		value = (long long)n - 1;
	}

	else
	{
		value = fib(n - 1, array) + fib(n - 2, array);
	}

	// cache the value into the array

	array[n - 1] = value;
	return array[n - 1];
}