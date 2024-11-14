#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, b, c;
    long long total_supervisors = 0;

    // 시험장 개수 입력
    if (scanf("%d", &n) != 1 || n <= 0 || n > 1000000) {
        printf("시험장 개수 입력 오류입니다.\n");
        return 1;
    }

    // 동적 메모리 할당으로 students 배열 선언
    int* students = (int*)malloc(n * sizeof(int));
    if (students == NULL) {
        printf("메모리 할당 실패\n");
        return 1;
    }

    // 각 시험장의 학생 수 입력
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &students[i]) != 1 || students[i] < 0) {
            printf("학생 수 입력 오류입니다.\n");
            free(students);
            return 1;
        }
    }

    // 감독관 능력 입력
    if (scanf("%d %d", &b, &c) != 2 || b <= 0 || c <= 0) {
        printf("감독관 능력 입력 오류입니다.\n");
        free(students);
        return 1;
    }

    // 각 시험장에 필요한 총 감독관 수 계산
    for (int i = 0; i < n; i++) {
        // 주 감독관 1명 배치
        total_supervisors++;

        // 주 감독관이 감독한 후 남은 학생 수 계산
        int remaining_students = students[i] - b;

        // 부 감독관이 필요한 경우 계산
        if (remaining_students > 0) {
            total_supervisors += (remaining_students + c - 1) / c;  // 올림 처리
        }
    }

    printf("%lld\n", total_supervisors);

    // 동적 메모리 해제
    free(students);
    return 0;
}
