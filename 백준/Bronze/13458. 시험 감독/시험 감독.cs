using System;
using System.Collections.Generic;

class Program {
    static void Main() {
        // 시험장 개수, 주 감독관, 부 감독관의 능력
        int N = int.Parse(Console.ReadLine());
        List<int> A = new List<int>();  // 학생 수를 저장할 리스트
        long resultNum = 0;

        // 각 시험장의 학생 수 입력
        string[] students = Console.ReadLine().Split();
        for (int i = 0; i < N; i++) {
            A.Add(int.Parse(students[i]));
        }

        // 주 감독관과 부 감독관의 감독 가능 인원 수 입력
        string[] supervisors = Console.ReadLine().Split();
        int B = int.Parse(supervisors[0]);
        int C = int.Parse(supervisors[1]);

        // 각 시험장에 필요한 총 감독관 수 계산
        for (int i = 0; i < N; i++) {
            resultNum++;  // 주 감독관 1명 배치

            // 남은 학생 수에 대해 부 감독관이 필요한 경우
            if (A[i] > B) {
                resultNum += (A[i] - B + C - 1) / C;  // 올림 계산
            }
        }

        // 결과 출력
        Console.WriteLine(resultNum);
    }
}
