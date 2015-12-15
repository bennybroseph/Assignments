from graphics import *

from Maths import *
from BoundingBox import *
from Object import _Object
from EventHandler import _EventHandler

from random import *

class Player(_Object):
	def __init__(self, a_Pos, a_Size):
		_Object.__init__(self, a_Pos, a_Size)
		
		self.UpFlag = False
		self.DownFlag = False
		self.LeftFlag = False
		self.RightFlag = False
		
		self.Image.setOutline("blue")
		self.Image.setFill("white")
		
	def Update(self):
		_Object.Update(self)
		
		if(UpFlag):
			
			
	
	