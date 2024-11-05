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

/*
구매할 아이스크림 높이 : S
베이스가 되는 아이스크림 높이: A
추가 아이스크림 한 층 당 높이 : B
ice = (S-A)/B
S%B 나머지가 있다면

*/