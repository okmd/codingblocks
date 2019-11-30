# Note: Done
def print_dp(dp):
	for i in range(len(dp)):
		print(dp[i])

def lps(str):
	n = len(str)
	dp = [[1 for i in range(n)] for i in range(n)] # 2D array contaning 0
	
	for i in range(n): #diaglonal 1
		dp[i][i] = 1

	for i in range(2,n+1): # for string length
		for j in range(n-i+1):
			k = i+j - 1
			if str[j]==str[k]:
				dp[j][k] = 2 + dp[j+1][k-1]
			else:
				dp[j][k] = max(dp[j+1][k], dp[j][k-1])

	return dp[0][n-1]


print(lps(input()))