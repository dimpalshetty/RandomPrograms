
def bubblesort(a):
    n = len(a)
    
    for i in range(n):
        for j in range(0, n-i-1):
            
            if a[j+1]<a[j]:
                a[j],a[j+1]=a[j+1], a[j]
   



arr = [2, 9, 4, 29, 1, 6, 100,98]

bubblesort(arr)

print ("Sorted array :")
print(arr)
