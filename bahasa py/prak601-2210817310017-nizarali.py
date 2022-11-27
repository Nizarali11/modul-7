x,y=map(int,input().split())
z=list(map(int,input().strip().split()))[:x*y]
a=0
while a<(x*y):
    for i in z:
        print(i,end=' ')
        a+=1
        if (a)%y==0:
            print()