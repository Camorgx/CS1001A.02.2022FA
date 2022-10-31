n = 1
while True:
    try:
        n = int(input())
    except Exception:
        continue
    if n == 0:
        break
    sum = 0
    fact = 1
    for i in range(1, n + 1):
        fact *= i
        sum += fact
    print(sum)
    print("")
    print("")
    print(float(sum))
