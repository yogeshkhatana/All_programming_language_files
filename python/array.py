from array import *
vals=array('i',[2,3,4,5,-6])
print(vals.buffer_info())
print(vals.typecode)
vals.reverse()
print(vals)
print(vals[0])
for i in range(len(vals)):
    print(vals[i])
    #for e in vals:
    #print(e)
valse=array('u',['a','e','i','o','u'])
for i in valse:
    print(i)
newarr=array(vals.typecode,(a*a for a in vals))
for e in newarr:
    print(e)