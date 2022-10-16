while True:
    s = 0
    t = 1
    n = input()
    if n == "":
        break
    try:
        n = int(n)
    except Exception:
        continue
    for i in range (1, n + 1):
        t *= i
        s += t
    print (s)
