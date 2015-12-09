from math import *

NULL = 0

class Vector2D:
	
	def __init__(self, X, Y):
		self.X = X
		self.Y = Y
	
	def Magnitude(self):
		return sqrt(pow(self.X, 2) + pow(self.Y, 2))
		
	def Normalize(self):
		return Vector2D(self.X/Magnitude(), self.Y/Magnitude())
		
	def __add__(self, other):
		if (type(other) is Vector2D) == True:
			return Vector2D(self.X + other.X, self.Y + other.Y)
			
		if (type(other) is int) == True or (type(other) is float) == True:
			return Vector2D(self.X + other, self.Y + other)
	
	def __sub__(self, other):
		if (type(other) is Vector2D) == True:
			return Vector2D(self.X - other.X, self.Y - other.Y)
			
		if (type(other) is int) == True or (type(other) is float) == True:
			return Vector2D(self.X - other, self.Y - other)
	
	def __mul__(self, other):
		if (type(other) is Vector2D) == True:
			return Vector2D(self.X * other.X, self.Y * other.Y)
			
		if (type(other) is int) == True or (type(other) is float) == True:
			return Vector2D(self.X * other, self.Y * other)
	
	def __truediv__(self, other):
		if (type(other) is Vector2D) == True:
			return Vector2D(self.X / other.X, self.Y / other.Y)
			
		if (type(other) is int) == True or (type(other) is float) == True:
			return Vector2D(self.X / other, self.Y / other)
		
def Dot(VectorA, VectorB):
	if (type(VectorA) is Vector2D) == True and (type(VectorB) is Vector2D) == True:
		return (VectorA.X * VectorB.X) + (VectorA.Y * VectorB.Y)

def Lerp(VectorA, VectorB, t):
	if (type(VectorA) is Vector2D) == True and (type(VectorB) is Vector2D) == True:
		return Vector2D(
			(1 - t) * VectorA.X + t * VectorB.X,
			(1 - t) * VectorA.Y + t * VectorB.Y)

