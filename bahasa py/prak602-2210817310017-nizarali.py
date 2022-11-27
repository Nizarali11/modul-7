x=int(input());z=1
y=list(map(int,input().strip().split()))[:x]
for i in y:
    print(i*z,end=' ')
    z+=1