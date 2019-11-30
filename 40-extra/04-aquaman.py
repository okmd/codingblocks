#Note: No
power_dp = {} # {(2,3):8}, 2^3 = 8
def power(num, n):
	if n==0:
		return 1
	if (num, n) in power_dp:
		return power_dp[num,n]
	else:
		res = power(num, n//2)*power(num, n//2)
		if n&1:
			res = res*num
		power_dp[(num, n)] = res
		return res

def aquaman(a,b):
	pair = []
	x = 1
	X = power(x,b)
	while X < a:
		y = x
		Y = power(y,b)
		while X + Y < a:
			y += 1
			Y = power(y,b)
		if(X+Y==a):
			pair.append((x,y))
		x += 1
		X = power(x,b)
	
	return pair

def chkCnt(x, n, cn=1, cs=0):
	res = 0
	p = power(cn , n)
	while p + cs <x:
		res += chkCnt(x,n,cn+1, p+cs)
		cn += 1
		p = power(cn, n)
	if p + cs == x:
		res += 1

	return res


a = int(input())
b = int(input())
# pair = aquaman(a,b)
# for x, y in [p for p in pair]:
# 	print(x,y, end=" ")
# print()
# print(len(pair))

# print(power(a,b))
print(chkCnt(a,b))