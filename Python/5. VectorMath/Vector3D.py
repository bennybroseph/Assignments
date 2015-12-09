from math import *

NULL = 0 # Since python doesn't have 'NULL', define it for readability sake

class Vector3D:
	
	# Constructor for 'Vector3D'. If no value is given it will be assigned 'NULL'
	def __init__(self, X = NULL, Y = NULL, Z = NULL):
		self.X = X	# First value of the 'Vector3D'
		self.Y = Y	# Second value of the 'Vector3D'
		self.Z = Z	# Third value of the 'Vector3D'
	
	# Overloaded implicit/explicit conversion to 'str'. Mostly used for 'print(...)'	
	def __str__(self):
		return "(" + str(self.X) + ", " + str(self.Y) + ", " + str(self.Z) + ")"
	
	# Returns the scalar value for the length/magnitude of the 'Vector3D'
	def Magnitude(self):
		return sqrt((self.X ** 2) + (self.Y ** 2) + (self.Z ** 2))
	
	# Returns the normalized vector from the 'Vector3D'
	def Normalize(self):
		return self.X/self.Magnitude()
	
	# Overloaded '+' function
	def __add__(self, other):
		# Differentiating between 'Vector3D' and 'int'/'float' for the 'other' parameter
		if (type(other) is Vector3D) == True:
			return Vector3D(self.X + other.X, self.Y + other.Y, self.Z + other.Z)
			
		elif (type(other) is int) == True or (type(other) is float) == True:
			return Vector3D(self.X + other, self.Y + other, self.Z + other)
	
	# Overloaded '-' function
	def __sub__(self, other):
		# Differentiating between 'Vector3D' and 'int'/'float' for the 'other' parameter
		if (type(other) is Vector3D) == True:
			return Vector3D(self.X - other.X, self.Y - other.Y, self.Z - other.Z)
			
		elif (type(other) is int) == True or (type(other) is float) == True:
			return Vector3D(self.X - other, self.Y - other, self.Z - other)
	
	# Overloaded '*' function
	def __mul__(self, other):
		# Differentiating between 'Vector3D' and 'int'/'float' for the 'other' parameter
		if (type(other) is Vector3D) == True:
			return Vector3D(self.X * other.X, self.Y * other.Y, self.Z * other.Z)
			
		elif (type(other) is int) == True or (type(other) is float) == True:
			return Vector3D(self.X * other, self.Y * other, self.Z * other)
	
	# Overloaded '/' function
	def __truediv__(self, other):
		# Differentiating between 'Vector3D' and 'int'/'float' for the 'other' parameter
		if (type(other) is Vector3D) == True:
			return Vector3D(self.X / other.X, self.Y / other.Y, self.Z / other.Z)
			
		elif (type(other) is int) == True or (type(other) is float) == True:
			return Vector3D(self.X / other, self.Y / other, self.Z / other)