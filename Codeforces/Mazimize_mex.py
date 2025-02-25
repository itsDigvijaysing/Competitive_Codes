def maximize_mex(asize_x, test_cases):
	results = []
	for i in range(t):
		n, x = test_cases[i][0]
		array = test_cases[i][1]
		array.sort()
		
		mex = 0
		for num in array:
			if num == mex:
				mex += 1
			elif num > mex:
				if x > 0:
					x -= 1
					mex += 1
				else:
					break
		
		mex += x
		results.append(mex)
	
	return results

n = int(input())
for i in range(n):
    asize_x = input().split()
    array = input().split()
    result = maximize_mex(asize_x,array)