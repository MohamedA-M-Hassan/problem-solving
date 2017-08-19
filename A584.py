
#http://codeforces.com/contest/584/problem/A

import math
import random
n,t=map(int,raw_input().split())
range1=math.pow(10,(n-1))
range2=math.pow(10,(n))
r=t+1
while r%t!=0:
	r=random.randint(range1,(range2-1))
	if (t==10 and n == 1):
		r=-1
		break

print(r)