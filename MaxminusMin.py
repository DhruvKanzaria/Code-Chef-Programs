for i in range(int(input())):
    A, B, C = map(int, input().split(" "))
    print(max(A, B, C) - min(A, B, C))