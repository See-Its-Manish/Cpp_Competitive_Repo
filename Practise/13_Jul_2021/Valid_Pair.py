def isEqual(a,b):
	return a==b

a = int(input())
b = int(input())
c = int(input())

if(isEqual(a,b)):
	print("YES")
elif(isEqual(b,c)):
	print("YES")
elif(isEqual(a,c)):
	print("YES")
else:
	print("NO")
