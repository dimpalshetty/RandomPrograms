

def binarysearch(arr, l, r,x):
    
    while(l<=r):
        mid  = l + (r-1)//2
        
        if arr[mid]==x:
            return mid;
        
        elif arr[mid]<x:
            l=mid+1
        else:
            r= mid-1


arr = [2, 5, 6, 8,10]
x = 6

result = binarysearch(arr, 0, len(arr)-1,x)
print("the element is at index", result)
