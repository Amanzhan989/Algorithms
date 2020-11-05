a = list(input().split())
cnt = 0
b = []
for i in range(len(a)):
    if ord(a[i])==42:
        #cnt+=int(int(a[i-1])*int(a[i-2]))
        if i==len(a)-1:
            print(b[0]*b[1])
            exit()
        else:
            a[i] = int(int(a[i-1])*int(a[i-2]))
            b.append(a[i])
    elif ord(a[i])==43:
        #cnt+=int(int(a[i-1])+int(a[i-2])) 
        if i==len(a)-1:
            print(b[0]+b[1])
            exit()
        else:
            a[i] = int(int(a[i-1])+int(a[i-2]))
            b.append(a[i])
    elif ord(a[i])==45:
        #cnt+=int(int(a[i-2])-int(a[i-1]))
        if i==len(a)-1:
            print(b[0]-b[1])
            exit()
        else:
            a[i] = int(int(a[i-2])-int(a[i-1]))
            b.append(a[i]) 