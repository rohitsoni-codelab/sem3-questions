list1=[]
n=int(input("Enter total names="))
for i in range (0,n):
    ip=(input("Enter {} name".format(i+1)))
    # ip=int(input("Enter name="))
    list1.append(ip)
print("Original list",list1)
list2=[]
lim=int(input("Enter word limit="))
for i in list1:
    if len(i)>lim:
        list2.append(i)
print("NEW LIST OF WORDS IS",list2)