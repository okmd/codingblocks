
n,m,k = list(map(int,  input().strip().split(' ')))
a =  input().strip().split(' ')
b =  input().strip().split(' ')

MAX = max(n, m)+1

dp=[[[-1 for _ in range(k+1)] for _ in range(MAX)] for _ in range(MAX)] #[[[-1]*MAX]*MAX]*8


def find(i,j,k):
    if i==n or j==m:
        return 0
        
    if dp[i][j][k]!=-1:
        return dp[i][j][k]
        
    res = 0
    if a[i]==b[j]:
        res = 1+find(i+1, j+1, k)
    else:
        if k>0:
            res = 1 + find(i+1, j+1, k-1)
        res = max(res, find(i+1, j, k))
        res = max(res, find(i, j+1, k))
        
    dp[i][j][k] = res
    
    return res
    

print(find(0,0,k))
