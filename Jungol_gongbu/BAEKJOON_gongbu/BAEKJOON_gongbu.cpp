#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int prime(int num) { 
    if (num <= 1) return 0; // 1이하면 소수가 아님
    for (int i = 2; i < sqrt(num); i++) // 2부터 시작 num을 루트한 값까지 i++
    {
        if (num % i == 0) return 0; // num i로 나눠지면 0
    }  
    return 1; // 하나라도 1값이 있으면 1리턴
}


int main()
{
    int N, cnt = 0, num;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num);
        if (prime(num)) cnt++;
    }

    printf("%d", cnt);

    return 0;

}
