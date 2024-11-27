# 필랜드롬 진법

X = int(input())
p = [0]*50

# 첫 번째 루프: X를 b진법으로 변환하여 팰린드롬인지 검사
for i in range(2, int(X**0.5) + 1):
    l = 0
    k = X
    while k > 0:
        p[l] = k % i
        k //= i
        l += 1

    j, k = 0, l - 1
    while j < k:
        if p[j] != p[k]:
            break
        j += 1
        k -= 1

    if j >= k and l > 1:
        print(i)

# 두 번째 루프: temp * b + b = X 조건 확인
for i in range(int(X**0.5), 0, -1):
    if (X - i) % i == 0 and (X - i) // i > i:
        print((X - i) // i)

