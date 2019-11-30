def tst():
	mapp = {}# int:bool
	input() # n
	arr = input().strip().split(' ')# list of str number
	nq = int(input().strip())

	for i in arr: #make hash
		mapp[i] = True

	for _ in range(nq):
		q = input().strip() # '1'
		if mapp.get(q):
			print("Yes")
		else:
			print("No")

def tst1():
    try:
    	mapp = {}# int:bool
    	n = int(input())
    	arr = list(map(int,input().split(' ')))
    	nq = int(input())
    
    	for i in arr: #make hash
    		mapp[i] = True
    
    	qarr = list(map(int, input().split(' ')))
    	for q in qarr:
    		if mapp.get(q):
    			print("Yes")
    		else:
    			print("No")
    except:
        print("Error")

t = int(input())
for _ in range(t):
	tst()
	#tst1()


