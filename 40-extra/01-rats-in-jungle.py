# Note: Done
def rats(arr):
    cnt = 0
    mapp = {}
    for e in arr:
        if e==0:
            cnt+=1
            continue
        cnt += 1
        if e in mapp.keys():
            mapp[e] -= 1
            if mapp[e] == 0:
                del mapp[e]
        else:
            mapp[e]=e
                
    return cnt + sum(mapp.values())

int(input())
arr = list(map(int, input().split(' ')))
print(rats(arr))
