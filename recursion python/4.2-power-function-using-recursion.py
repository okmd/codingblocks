'''
Power(x, n): using recursion.
        { 1             if n=0;
f(x) =  { x*f(n-1)^2    if n is odd
        { f(n-1)^2      if n is even
'''
def x_to_n(x, n):
    if n==1:
        return x
    res = x_to_n(x, n//2)
    if n&1: #odd
        return x*res*res
    else:
        return res*res

print(x_to_n(2,3))
print(x_to_n(3,2))
print(x_to_n(12, 2))