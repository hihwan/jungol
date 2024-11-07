#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num;
	int sum = 0, cnt = 0;
	double avg = 0;

	while (1)
	{
		scanf("%d", &num);

		if (num < 0 || num>100) break;
		
		sum += num;
		cnt++;

		avg = (double)sum / cnt;
	}

	printf("sum : %d\navg : %.1f", sum, avg);

	return 0;
}


/*

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{


	return 0;
}

*/