m=[]
n=int(input("enter number of students:"))

def accept(m):
    for i in range(n):
        x=int(input(f"Enter marks of students {i+1}:"))
        m.append(x)

def avg(m):
    sum=0
    for i in range(len(m)):
        if(m[i]!=-1):
            sum=sum+m[i]
        x=sum/len(m)
    print("avg marks of student is:",x)

def high(m):
    max=m[0]
    for i in m:
        if(max<=i):
            max=i
    print("highest number is:",max)

def lowest(m):
    min=m[0]
    for i in range(len(m)):
        if(m[i]!=-1):
            if(min>=m[i]):
                min=m[i]
    print("lowest marks is:",min)

def freq(m):
    highfreq=0
    for i in range(len(m)):
        freq=0
        for j in range(len(m)):
            if(m[i]==m[j]):
                freq+=1
        if(freq>highfreq):
            highfreq=freq
            x=m[i]
    print("freq is :",highfreq,"of",x,"marks")

def absent(m):
    count=0
    for i in range(len(m)):
        if(m[i]==-1):
            count+=1
    print("number of absent stud are",count)





accept(m)
avg(m)
high(m)
lowest(m)
freq(m)
absent(m)
