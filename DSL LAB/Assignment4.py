a=[]
n=int(input("enter a total number to form an array: "))

def accept(a):
    for i in range(n):
        x=int(input(f"Enter {i+1} number:"))
        a.append(x)
    print(a)

def linear(a):
    key=int(input("enter a key element to search(linear search):"))
    for i in range(len(a)):
        if(a[i]==key):
            print(f"element found at index {i}")

def binary(a,key):
    start=0
    end=len(a)-1
    while(start<=end):
        mid=int((start+end)/2)

        if(a[mid]==key):
            print("element found at index:",mid)
            break
        elif(a[mid]>key):
            start=mid+1
        elif(a[mid]<key):
            end=mid-1
        else:
            print("element not found")

def sentinel(a,key):
    i=0
    last=a[-1]

    while(a[i]!=key):
        i+=1
    if(i<len(a)-1):
        print("element found at index:",i)

    elif(last==key):
        print("element found at index:",i)
    else:
        print("element not found")

#def fibonacci(a,key):
    



accept(a)
linear(a)
binary(a,7)
sentinel(a,8)