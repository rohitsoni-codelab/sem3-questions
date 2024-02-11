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
list3=[]
list3=list2.copy()
list3.sort(reverse=True)
print("The second largest number is",list3[1])

print("Unique list generated is=",list2)