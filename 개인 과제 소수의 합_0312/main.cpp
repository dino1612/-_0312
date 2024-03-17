#include <stdio.h>

int main() {
    int sum = 0;
    int i, j;

    // 0부터 100까지 소수 구하기
    for (i = 2; i <= 100; i++) {
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                break;
            }
        }
        if (j > i / 2) {
            sum += i;
        }
    }

    // 소수 합 출력
    printf("0부터 100까지 소수의 합: %d\n", sum);

    return 0;
}
