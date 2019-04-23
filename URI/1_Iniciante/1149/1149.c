#include <stdio.h>

int main()
{
	int A, N, i, fib = 0;

	scanf("%d", &A);
	while(1)
	{
		scanf("%d", &N);
		if(N <= 0)
			continue;
		break;
	}
	for(i = 0;i <= N-1;i++)
		fib += A+i;
	printf("%d\n", fib);
	return 0;
}
