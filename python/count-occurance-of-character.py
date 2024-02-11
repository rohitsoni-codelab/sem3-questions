def count_chr(s,c):
    count=0
    for i in s:
        if i==c:
            count+=1
    return count


str=input("Enter any word=")
chr=input("Enter character to be searched=")
count=count_chr(str,chr)
print("Occurance of",chr,"is",count,"times")