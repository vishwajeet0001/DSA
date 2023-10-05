a=[]
n=int(input("enter a number:"))

def selection(a):
    for x in range(n):
        x=int(input("enter a array number:"))
        a.append(x)
    print(a)
    for i in range(len(a)):
        for j in range(i+1,len(a)):
            if(a[i]>a[j]):
                a[i],a[j]=a[j],a[i]


def bubble(a):
    count=1
    while(count<len(a)):
        count+=1
        for i in range(n-count):
            if a[i]>a[i+1]:
                a[i],a[i+1]=a[i+1],a[i]
                print(a)
    


selection(a)
print(a)
bubble(a)
print(a)