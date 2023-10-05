a=[]
n=int(input("enter total numbers you want to sort:"))
for i in range(n):
    x=float(input("enter a number:"))
    a.append(x)
print(a)

def bucketsort(a):
    bucket=[]               
    for i in range(len(a)):     
        bucket.append(([]))     
    print(bucket)
    for j in a:              
        index=int(n*j)
        bucket[index].append(j)    
    for i in range(len(a)):
        bucket[i]=sorted(bucket[i])  

    k=0
    for i in range(len(a)):                   
        for j in range(len(bucket[i])):
            a[k]=bucket[i][j]
            k+=1
    return a

print('sorted array is:')
print(bucketsort(a))