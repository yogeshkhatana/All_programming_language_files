from array import *
arr=array('i',[])
n=int(input("Enter length of an array"))
for i in range(n):
    i=int(input("Enter value:"))
    arr.append(i)
print(arr)
arr1=array('i',[])
k=0
r=int(input("Enter value to  be search:"))
for e in arr:
    if e==r:
        print(k)
        break
    k=k+1
print(arr.index(r))



arr3=array('i',[1,2,3,4,5])
for i in range(len(arr3)):
    if(i==1):
        continue
    print(arr3[i])


