from graphics import *

from Maths import *
from BoundingBox import *

# The '_'(underscore) is not needed, but you should not use this class directly...
class _Object:
	def __init__(self, a_Pos, a_Size):
		self.Pos = a_Pos
		self.PrevPos = self.Pos
		
		self.Size = a_Size
		
		self.Velocity = Vector2D(NULL, NULL)
		
		self.bbBoundingBox = BoundingBox(self.Pos, self.Size)
		
		self.Image = Rectangle(
			Point(self.bbBoundingBox.Min.X, self.bbBoundingBox.Min.Y), 
			Point(self.bbBoundingBox.Max.X, self.bbBoundingBox.Max.Y))
	
	def Update(self):
		self.PrevPos = self.Pos
		self.Pos = self.Pos + self.Velocity
		
		self.bbBoundingBox.Update()
	
	def LateUpdate(self):
		self.Image.move(self.Pos.X - self.PrevPos.X, self.Pos.Y - self.PrevPos.Y)
		self.bbBoundingBox.LateUpdate(self.PrevPos, self.Pos)