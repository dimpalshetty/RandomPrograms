print("enter expression")
i=input()
# print (i)
c=list(i)
print (c)
postfix=[]
ch=''
pre={'#':0, '(':1, '+':2, '-': 2, '*':3, '/':3, '%':3, '^':4}
stack=[]
stack.append('#')
while ch in c:
    print (ch)
    if ch=='(':
        stack.append(ch)       
    elif isalnum(ch):
        postfix.append(ch)
    elif ch==')':
        popped=stack.pop()    
        while popped!='(':
            postfix.append(popped) 
            popped=stack.pop()
    else:
       pr=pre[ch]
       while(pre[stack[-1]]>=pr):
           postfix.append(stack.pop())
       stack.append(ch)  
        
while stack[-1]!='#':
    postfix.append(stack.pop())
print(postfix)    


