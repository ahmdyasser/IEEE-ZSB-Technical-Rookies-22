 n = int(input())
    arr = map(int, input().split())
    s = set(arr)
    s.remove(max(s))
    print(max(s))

