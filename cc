a, b, c, d = map(int, input().split())
count_greater_than_10 = 0

if a > 10:
    count_greater_than_10 += 1
if b > 10:
    count_greater_than_10 += 1
if c > 10:
    count_greater_than_10 += 1
if d > 10:
    count_greater_than_10 += 1

print(count_greater_than_10)
