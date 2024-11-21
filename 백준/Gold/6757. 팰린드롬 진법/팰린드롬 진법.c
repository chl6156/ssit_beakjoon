#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 팰린드롬인지 확인하는 함수
bool isPalindrome(int X, int b) {
    int v[32]; // 최대 32자리 (2진수 기준) 배열로 선언
    int idx = 0;

    // X를 b진법으로 변환하여 배열에 저장
    while (X > 0) {
        v[idx++] = X % b;
        X /= b;
    }

    // 팰린드롬 확인
    for (int i = 0; i < idx / 2; i++) {
        if (v[i] != v[idx - i - 1]) {
            return false;
        }
    }
    return true;
}

typedef struct {
    int data[10000];
    int size;
} Set;


void insert(Set* set, int value) {
    for (int i = 0; i < set->size; i++) {
        if (set->data[i] == value) {
            return; // 이미 값이 있으면 추가하지 않음
        }
    }
    set->data[set->size++] = value;
}

// 집합을 정렬
void sort(Set* set) {
    for (int i = 0; i < set->size - 1; i++) {
        for (int j = i + 1; j < set->size; j++) {
            if (set->data[i] > set->data[j]) {
                int temp = set->data[i];
                set->data[i] = set->data[j];
                set->data[j] = temp;
            }
        }
    }
}

int main() {
    int X;
    scanf("%d", &X);

    Set result = { .size = 0 }; // 결과를 저장할 집합

    // 첫 번째 조건: X가 b진법에서 팰린드롬인지 확인
    for (int b = 2; b * b < X; b++) {
        if (isPalindrome(X, b)) {
            insert(&result, b);
        }
    }

    // 두 번째 조건: temp * b + b = X의 조건 확인
    for (int b = 1; b * b + b < X; b++) {
        if (X % b == 0) {
            insert(&result, X / b - 1);
        }
    }

    // 결과를 정렬
    sort(&result);

    // 결과 출력
    for (int i = 0; i < result.size; i++) {
        printf("%d\n", result.data[i]);
    }

    return 0;
}
