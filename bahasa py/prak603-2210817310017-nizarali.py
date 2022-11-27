x,y=map(int,input().split());
if x!=y:
    print("Jumlah tidak sama")
else:
    a=[];b=[]
    a= list(map(int, input().split()))
    b= list(map(int, input().split()))
    for i in range(0, x):
        a.append(a[i])
    for i in range(0, x):
        b.append(b[i])
    for i in range(0, x):
       print(a[i]*b[i],end=' ')