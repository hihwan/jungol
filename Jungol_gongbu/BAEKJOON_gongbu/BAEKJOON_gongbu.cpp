#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int prime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if(num % i == 0) return 0;
    }
    return 1;
}


int main()
{
    int N, cnt = 0, num;
  
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        if (prime(num)) {
            cnt++;
        }
    }
    
    printf("%d", cnt);

    return 0;

}
