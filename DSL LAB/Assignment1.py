a=[]
b=[]
c=[]

num_a=int(input("enter number of student playing cricket:"))
num_b=int(input("enter number of student playing badminton:"))
num_c=int(input("enter number of student playing football:"))

i=0

def accept(x,y):
    j=0
    while(j<x):
        i=int(input("enter roll no of students:"))
        if i<1:
            print("enter correct roll no")   
        else:
            y.append(i)
            j+=1

print("student playing cricket")
accept(num_a,a)
print("student playing badminton")
accept(num_b,b)
print("student playing football")
accept(num_c,c)

def display(x):
    print(x)

print("list of students playing cricket are:")
display(a)
print("list of students playing badminton are:")
display(b)
print("list of students playing football are:")
display(c)

d=[]
e=[]
f=[]
g=[]

#1
for i in a:
    if i in b:
        d.append(i)
d.sort()
print("list of students playing cricket and badminton both:",d)

#2
for i in a:
    if i not in d:
        e.append(i)
for i in b:
    if i not in d:
        e.append(i)
e.sort()
print("list of students playing either cricket or badminton but not both:",e)

#3
for i in c:
    if i not in d:
        f.append(i)
f.sort()
print("list of student playing niether badminton nor cricket:",f)

#4
x=[]

for i in a:
    if i in c:
        x.append(i)

for i in x:
    if i not in b:
        g.append(i)
g.sort()
print("Number of students who play cricket and football but not badminton:",g)

