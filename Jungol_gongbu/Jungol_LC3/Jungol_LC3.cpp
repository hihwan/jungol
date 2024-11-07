#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int B, H;
	double W;
	char C;

	while (1)
	{
		scanf("%d %d", &B, &H);
		W = (double)(B * H) / 2;
		printf("Base = Height = Triangle width = %.1f\n", W);
		printf("Continue? ");
		scanf(" %c", &C);
		if (C != 'Y' && C != 'y') break;
	}

	return 0;
}