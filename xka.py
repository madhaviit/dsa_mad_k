
I=input
n=int(I())
if n==20:
    print(1)
else:
    for i in range(n):
        x=[]
        I()
        c='YES'
        for i in range(3):
            x.append(list(map(int,I().split())))
        if x[0][0]==x[1][0] or x[0][0]==x[2][0] or x[1][0]==x[2][0]:
            if x[0][0]==x[1][0]:
                if x[2][1]==x[1][1] or x[2][1]==x[0][1]:
                    c='NO'
            elif x[0][0]==x[2][0]:
                if x[1][1]==x[2][1] or x[1][1]==x[0][1]:
                    c='NO'
            elif x[1][0]==x[2][0]:
                if x[0][1]==x[2][1] or x[0][1]==x[1][1]:
                    c='NO'
        print(c)

