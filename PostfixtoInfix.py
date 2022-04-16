print("Enter the exp")
i = input()
char = list(i)
c= ""
s=[]
for c in char:
    if c.isalnum():
        #s.append(c)
        s.insert(-1,c)
    else:
        op1 = s[0]
        s.pop(0)
        op2= s[0]
        s.pop(0)
        s.insert(0, '(' + op1 + c + op2 + ')') 
print(s[0])
