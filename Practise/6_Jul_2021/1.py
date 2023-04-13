class A:
	
	def __init__(self,name,roll):
		self.name = name 	# Public
		self.__roll = roll  # Private

	def __str__(self):
		return f"Name : {self.name} and Roll : {self.__roll}"


a = A("ABC",1)
print(a)

a.name = "XYZ"
a.roll = 12
print(a)




class B:
	
	def __init__(self):		# Default Constructor
		self.id = 10

	def show(self):
		print(f"id = {self.id}")


class C:
	
	def __init__(self, id):	# Parameterized Constructor
		self.id = id

	def show(self):
		pass
		#Print values

b1 = B()

def show(b):
	print(b.id)

show(b1)



a = 10	# Object

















