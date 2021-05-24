def gcd(a,b):
	if(b==0):
		return a
	return gcd(b,a%b)

for i in range(1,11):
	print(17*i)

print(gcd(85,68))