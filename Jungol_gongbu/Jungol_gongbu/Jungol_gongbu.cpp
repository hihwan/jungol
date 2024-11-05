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
		
		if (S % A != 0) ice++;
		printf("%d", M + (ice * 100));
	}
	else
	{
		printf("%d", M);
	}
	return 0;
}

/*
	구매할 아이스크림 높이 : S
	베이스가 되는 아이스크림 높이: A(M)
	추가 아이스크림 한 층 당 높이 : B
	구매해야 하는 아이스크림의 높이 : ice
	높이당 가격 : 100

	ice = (S-A)/B
	S % B 의 나머지가 있다면 추가 구매 해야하므로 ice++
	M + (ice * 100) = 총 가격
*/