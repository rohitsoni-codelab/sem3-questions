def add_string(s):
    length=len(s)
    if(length>2):
        if s[-3:]=='ing':
            s+='ly'
        else:
            s+='ing'
    return s


str=input("Enter a string=")
print("MODIFIED string=",add_string(str))