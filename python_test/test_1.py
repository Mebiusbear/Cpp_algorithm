import numpy as np

arr = [3,6,5,9,75,12,5,33,8,3,4]


def merge_sort_fake(arr):
    n = len(arr)
    if n <= 1:
        return arr

    mid = n // 2
        
    L = merge_sort_fake(arr[:mid])    
    R = merge_sort_fake(arr[mid:])

    i,j = 0,0
    temp = list()
    while i < len(L) and j < len(R):
        if L[i] <= R[j]:
            temp.append(L[i])
            i += 1
        else:
            temp.append(R[j])
            j += 1
    temp += R[j:] if i == len(L) else L[i:]
    return temp


print (arr)
print ()
n_arr = merge_sort_fake(arr)
print (n_arr)

# def merge_sort(arr,l,r,temp):
#     if l >= r:
#         return 
#     m = (l + r) // 2

#     merge_sort(arr,l,m,temp)
#     merge_sort(arr,m+1,r,temp)

#     i,j = l,m+1
#     k = 0
    
#     while i <= m and j <= r:
#         if arr[i] <= arr[j]:
#             temp[k] = arr[i]
#             i += 1
#         else:
#             temp[k] = arr[j]
#             j += 1
#         k += 1
#     while i <= m:
#         temp[k] = arr[i]
#         i += 1
#         k += 1
#     while j <= r:
#         temp[k] = arr[j]
#         j += 1
#         k += 1
    
#     j = 0
#     for i in range (l,r):
#         arr[i] = temp[j]
#         j += 1

# print (",")
# temp = np.zeros(len(arr),dtype=int)
# merge_sort(arr,0,len(arr)-1,temp)
# # print (arr)
