def main():
    X = int(input())

    # 첫 번째 루프: X를 b진법으로 변환하여 팰린드롬인지 검사
    for i in range(2, int(X**0.5) + 1):
        p = []  # 동적으로 진법 변환 값을 저장할 리스트
        k = X
        while k > 0:
            p.append(k % i)
            k //= i

        # 팰린드롬 확인
        if p == p[::-1] and len(p) > 1:  # 리스트를 뒤집어서 확인
            print(i)

    # 두 번째 루프: temp * b + b = X 조건 확인
    for i in range(int(X**0.5), 0, -1):
        if (X - i) % i == 0 and (X - i) // i > i:
            print((X - i) // i)


if __name__ == "__main__":
    main()
