num=int(input("Enter a number="))
sum=num;
while(sum>9):
    num1=sum
    sum=0
    while(num1>0):
        d=num1%10
        sum=sum+(d*d)
        num1=num1//10
if sum==1:
    print(num ,"is a happy number")
else:
    print(num ,"is not a happy number")