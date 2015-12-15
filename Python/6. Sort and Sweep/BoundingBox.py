from Maths import *

class BoundingBox:
	def __init__(self, a_Pos, a_Size):
		if (type(a_Pos) is Vector2D) == True or (type(a_Pos) is Vector3D) == True:
			self.Pos = a_Pos
		
		if (type(a_Size) is Vector2D) == True or (type(a_Size) is Vector3D) == True:
			self.Size = a_Size
			
		self.Min = self.Pos - (self.Size/2)
		self.Max = self.Min + self.Size
		
	def Update(self):
		self.Min = self.Pos - (self.Size/2)
		self.Max = self.Min + self.Size
		
		