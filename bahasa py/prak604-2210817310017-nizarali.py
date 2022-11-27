x=input();y=input();a=0;b=0
if len(x)!=len(y):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    for i in range(0,len(x)):
        if x[i]==' 'and y[i]==' ':
            continue
        elif x[i]==y[i]:
            print("*",end=' ')
            a+=1
        elif x[i]!=y[i]:
            print("#",end=' ')
            b+=1
    print("\n*=", a)
    print("#=", b)
    if a>=b:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")