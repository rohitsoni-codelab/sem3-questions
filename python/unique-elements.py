list1=[]
lim=int(input("Enter number of elements="))
for i in range(0,lim):
    ip=int(input("Enter {} element=".format(i+1)))
    list1.append(ip)
print("Original list=",list1)
list2=[]
for i in list1:
    if i not in list2:
        list2.append(i)
print("Unique list generated is=",list2)
