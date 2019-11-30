#Node: Done
# Python code to print largest permutation after K swaps 

def KswapPermutation(arr, n, k): 

	# Auxiliary array of storing the position of elements 
	pos = {} 
	for i in range(n): 
		pos[arr[i]] = i 

	for i in range(n): 

		# If K is exhausted then break the loop 
		if k == 0: 
			break

		# If element is already largest then no need to swap 
		if (arr[i] == n-i): 
			continue

		# Find position of i'th largest value, n-i 
		temp = pos[n-i] 

		# Swap the elements position 
		pos[arr[i]] = pos[n-i] 
		pos[n-i] = i 

		# Swap the ith largest value with the value at 
		# ith place 
		arr[temp], arr[i] = arr[i], arr[temp] 

		# Decrement K after swap 
		k = k-1

# Driver code 
n, k = list(map(int, input().strip().split(' ')))
arr = list(map(int, input().strip().split(' ')))
KswapPermutation(arr, n, k) 
print(" ".join(map(str,arr))) 
