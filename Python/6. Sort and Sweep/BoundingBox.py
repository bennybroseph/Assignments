from graphics import *

from Maths import *

class BoundingBox:
	def __init__(self, a_Pos, a_Size):
		if (type(a_Pos) is Vector2D) == True or (type(a_Pos) is Vector3D) == True:
			self.Pos = a_Pos
			self.PrevPos = self.Pos
			
		if (type(a_Size) is Vector2D) == True or (type(a_Size) is Vector3D) == True:
			self.Size = a_Size
			
		self.Min = self.Pos - (self.Size/2)
		self.Max = self.Min + self.Size
		
		self.Image = Rectangle(
			Point(self.Min.X, self.Min.Y), 
			Point(self.Max.X, self.Max.Y))
			
		self.Image.setFill("blue")
		self.Image.setOutline("blue")
		
		self.Tag = ""
	
	def __lt__(self, other):
		return False
		
	def Update(self):		
		self.Min = self.Pos - (self.Size/2)
		self.Max = self.Min + self.Size
		
	def LateUpdate(self, a_PrevPos, a_Pos):
		self.PrevPos = a_PrevPos
		self.Pos = a_Pos
		
		self.Image.move(self.Pos.X - self.PrevPos.X, self.Pos.Y - self.PrevPos.Y)