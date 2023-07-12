n = map(int,input().split())
q = map(int,input().split())
# n,m=map(int,input().split())

arr=list(map(int,input().split()))

dict = {}
sume = sum(arr)
for i in range(0,n):
    dict[i]=arr[i]     

while q>0:
    type=map(int,input().split())
    if type == 1:
        i = map(int,input().split())
        x = map(int,input().split())
        i=i-1
        if i in dict:
            sume = sume + x -dict[i]
            dict[i] = x
        else :
            sume =  sume + x - prev
            dict[i]=x
        print(sume)
    else:
        x = map(int,input().split())
        prev = x
        sume =  (n*prev)
        print(sume)
        dict.clear()
    q=q-1


