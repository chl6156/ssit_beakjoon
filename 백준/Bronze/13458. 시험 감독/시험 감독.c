#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N, B, C;
    int *A;
    long long result_num = 0;  // 큰 수를 저장하기 위해 long long 사용
    
    // 시험장 개수 입력 및 배열 동적 할당
    scanf("%d", &N);
    A = (int*)malloc(N * sizeof(int));
    if (A == NULL) {
        return 1;
    }

    // 각 시험장의 학생 수 입력
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    scanf("%d %d", &B, &C);

    // 각 시험장에 필요한 감독관 수 계산
    for (int i = 0; i < N; i++) {
        result_num++;  // 주 감독관 1명 배치

        // 남은 학생 수에 대해 부 감독관이 필요한 경우
        if (A[i] > B) {
            result_num += (A[i] - B + C - 1) / C;  // 올림 계산
        }
    }

    // 결과 출력
    printf("%lld\n", result_num);

    // 메모리 해제
    free(A);
    return 0;
}
