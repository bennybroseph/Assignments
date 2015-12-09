from math import *

NULL = 0 # Since python doesn't have 'NULL', define it for readability sake

class Vector2D:
	
	# Constructor for 'Vector2D'. If no value is given it will be assigned 'NULL'
	def __init__(self, X = NULL, Y = NULL):	
		self.X = X	# First value of the 'Vector2D'
		self.Y = Y	# Second value of the 'Vector2D'
	
	# Overloaded implicit/explicit conversion to 'str'. Mostly used for 'print(...)'
	def __str__(self):
		return "(" + str(self.X) + ", " + str(self.Y) + ")"
	
	# Returns the scalar value for the length/magnitude of the 'Vector2D'
	def Magnitude(self):
		return sqrt((self.X ** 2) + (self.Y ** 2))
	
	# Returns the normalized vector from the 'Vector2D'
	def Normalize(self):
		return self/self.Magnitude()
	
	# Overloaded '+' function
	def __add__(self, other):
		# Differentiating between 'Vector2D' and 'int'/'float' for the 'other' parameter
		if (type(other) is Vector2D) == True:
			return Vector2D(self.X + other.X, self.Y + other.Y)
			
		elif (type(other) is int) == True or (type(other) is float) == True:
			return Vector2D(self.X + other, self.Y + other)
	
	# Overloaded '-' function
	def __sub__(self, other):
		# Differentiating between 'Vector2D' and 'int'/'float' for the 'other' parameter
		if (type(other) is Vector2D) == True:
			return Vector2D(self.X - other.X, self.Y - other.Y)
			
		elif (type(other) is int) == True or (type(other) is float) == True:
			return Vector2D(self.X - other, self.Y - other)
	
	# Overloaded '*' function
	def __mul__(self, other):
		# Differentiating between 'Vector2D' and 'int'/'float' for the 'other' parameter
		if (type(other) is Vector2D) == True:
			return Vector2D(self.X * other.X, self.Y * other.Y)
			
		elif (type(other) is int) == True or (type(other) is float) == True:
			return Vector2D(self.X * other, self.Y * other)
	
	# Overloaded '/' function
	def __truediv__(self, other):
		# Differentiating between 'Vector2D' and 'int'/'float' for the 'other' parameter
		if (type(other) is Vector2D) == True:
			return Vector2D(self.X / other.X, self.Y / other.Y)
			
		elif (type(other) is int) == True or (type(other) is float) == True:
			return Vector2D(self.X / other, self.Y / other)