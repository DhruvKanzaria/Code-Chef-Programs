for i in range(int(input())):
    N, X, Y = map(int,input().split(" "))
    if ((Y%X == 0) and (Y >= X)) or (Y == 0):
        print("YES")
    else:
        print("NO")