x=int(input())
print("Matriks A")
a=[];b=[]
for i in range(0,x):
    y=list(map(int,input().split()))
    a.append(y[0:x])
print("Matriks B")
for j in range(0,x):
    z=list(map(int,input().split()))
    b.append(z[0:x])
print("Matriks AXB")
for i in range(0,x):
    for j in range(0,x):
        c=0
        for k in range(0,x):
            c+=a[i][k]*b[k][j]
        print(c,end=' ')
    print() 