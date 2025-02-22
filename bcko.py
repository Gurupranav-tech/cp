t = int(input())
MOD = 10 ** 9 + 7
arr = []

input()

line = input().split(" ")
for i in range(t):
    x = int(line[i])
    p = 2
    for j in range(1, x):
        p = (p * 2) % MOD
    arr.append(p)

for i in arr:
    print(i, end=" ")
print()
