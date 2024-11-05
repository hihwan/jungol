#include<stdio.h>


int main()
{
	int S, A, B, ice = 0;
	int M = 250;

	scanf("%d %d %d", &S, &A, &B);

	if (S > A)
	{
		S -= A;
		ice = S / B;
		
		if (S % A != 0)
			ice++;
		printf("%d", ice * M * 100);
	}
	else
	{
		printf("%d", M);
	}

	return 0;
}