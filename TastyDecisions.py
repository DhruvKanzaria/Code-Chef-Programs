T = int(input())
for i in range(0, T):
    X, Y = map(int,input().split())
    x=X*2
    y=Y*5
    if x>y:
        print("Choclate")

    elif x==y:
        print("Either")

    elif x<y:
        print("Candy")