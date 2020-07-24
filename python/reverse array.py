from array import *
arr=array('i',[])
for i in range(5):
    x=int(input("Enter value"))
    arr.append(x)
print("array is:",arr)
for i in range(5):
    print(arr[4-i])