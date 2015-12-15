from math import *

NULL = 0 # Since python doesn't have 'NULL', define it for readability sake

class Vector4D:
	
	def __init__(self, X = NULL, Y = NULL, Z = NULL, T = NULL):
		# If the passed value for 'X' is and 'int' or a 'float' the it is assumed that a parameter format of 'Vector4D(X, Y, Z, T)' was used/expected
		if (type(X) is int) == True or (type(X) is float) == True:
			self.X = X	# First value of the 'Vector4D'
			self.Y = Y	# Second value of the 'Vector4D'
			self.Z = Z	# Third value of the 'Vector4D'
			self.T = T	# Fourth value of the 'Vector4D'
			
		# Otherwise, the expected parameter format is 'Vector4D(hex(0x????????))'
		elif (type(X) is str) == True:
			X = int(X, 0)	# First, we convert the hex string to an integer
			
			# Next, we isolate the bits that we care about by using the '&' operation and then 
			# shift the number to the right until the bits we care about are flush to the right
			self.X = (X&0xFF000000)>>24		
			self.Y = (X&0x00FF0000)>>16
			self.Z = (X&0x0000FF00)>>8
			self.T = (X&0x000000FF)
	
	# Overloaded implicit/explicit conversion to 'str'. Mostly used for 'print(...)'	
	def __str__(self):
		return "(" + str(self.X) + ", " + str(self.Y) + ", " + str(self.Z) + ", " + str(self.T) + ")"
	
	# Returns the scalar value for the length/magnitude of the 'Vector4D'
	def Magnitude(self):
		return sqrt((self.X ** 2) + (self.Y ** 2) + (self.Z ** 2) + (self.T ** 2))
	
	# Returns the normalized vector from the 'Vector4D'
	def Normalize(self):
		return self/self.Magnitude()
	
	# Overloaded '+' function	
	def __add__(self, other):
		# Differentiating between 'Vector4D' and 'int'/'float' for the 'other' parameter
		if (type(other) is Vector4D) == True:
			return Vector4D(self.X + other.X, self.Y + other.Y, self.Z + other.Z, self.T + other.T)
			
		elif (type(other) is int) == True or (type(other) is float) == True:
			return Vector4D(self.X + other, self.Y + other, self.Z + other, self.T + other)
	
	# Overloaded '-' function
	def __sub__(self, other):
		# Differentiating between 'Vector4D' and 'int'/'float' for the 'other' parameter
		if (type(other) is Vector4D) == True:
			return Vector4D(self.X - other.X, self.Y - other.Y, self.Z - other.Z, self.T - other.T)
			
		elif (type(other) is int) == True or (type(other) is float) == True:
			return Vector4D(self.X - other, self.Y - other, self.Z - other, self.T - other)
	
	# Overloaded '*' function
	def __mul__(self, other):
		# Differentiating between 'Vector4D' and 'int'/'float' for the 'other' parameter
		if (type(other) is Vector4D) == True:
			return Vector4D(self.X * other.X, self.Y * other.Y, self.Z * other.Z, self.T * other.T)
			
		elif (type(other) is int) == True or (type(other) is float) == True:
			return Vector4D(self.X * other, self.Y * other, self.Z * other, self.T * other)
	
	# Overloaded '/' function
	def __truediv__(self, other):
		# Differentiating between 'Vector4D' and 'int'/'float' for the 'other' parameter
		if (type(other) is Vector4D) == True:
			return Vector4D(self.X / other.X, self.Y / other.Y, self.Z / other.Z, self.T / other.T)
			
		elif (type(other) is int) == True or (type(other) is float) == True:
			return Vector4D(self.X / other, self.Y / other, self.Z / other, self.T / other)