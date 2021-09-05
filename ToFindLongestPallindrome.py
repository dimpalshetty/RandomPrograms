def pallindrome(str): 
    seen={}
    start=0
    max_len=0
    red = ""
    for end in range(len(str)):
        if str[end] in seen:
            start=max(start, seen[str[end]]+1)
        seen[str[end]]=end 
        if max_len < end-start+1:
            max_len=end-start+1
            red = str[start: end+1]
    
    # red = str[start:start+max_len]   
    print("the string is: ", red) 
    return max_len


print("Enter the string: ")
str=[]
str= list(input())
length=pallindrome(str)
print("The length is: ", length)
