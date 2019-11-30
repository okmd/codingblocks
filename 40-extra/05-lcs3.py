# Note: Done
n=200
dp = [[[-1 for i in range(n)]
			for j in range(n)]
			for k in range(n)]

def lcs(i,j,k):
	if i==-1 or j==-1 or k==-1:
		return 0
	if dp[i][j][k]!=-1:
		return dp[i][j][k]
	if(x[i]==y[j] and y[j]==z[k]):
		dp[i][j][k] = 1+lcs(i-1, j-1, k-1)
		return dp[i][j][k]
	else:
		dp[i][j][k] = max(max(
						lcs(i-1,j,k),
						lcs(i, j-1, k)),
						lcs(i, j, k-1))
		return dp[i][j][k]


x = input()
y = input()
z = input()
i = len(x)
j = len(y)
k = len(z)

print(lcs(i-1, j-1, k-1))