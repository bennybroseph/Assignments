from graphics import *

from Maths import *
from BoundingBox import *
from Object import _Object
from EventHandler import _EventHandler

from random import *

PLAYER_SPEED = 0.5

class Player(_Object, _EventHandler):
	def __init__(self, a_Pos, a_Size):
		_Object.__init__(self, a_Pos, a_Size)
		_EventHandler.__init__(self)
		
		self.UpFlag = False
		self.DownFlag = False
		self.LeftFlag = False
		self.RightFlag = False
		
		self.Image.setOutline("blue")
		self.Image.setFill("white")
		
	def Update(self):
		if(self.UpFlag):
			self.Velocity.Y = -PLAYER_SPEED
		elif(self.DownFlag):
			self.Velocity.Y = PLAYER_SPEED
		else:
			self.Velocity.Y = 0
		
		
		if(self.LeftFlag):
			self.Velocity.X = -PLAYER_SPEED
		elif(self.RightFlag):
			self.Velocity.X = PLAYER_SPEED
		else:
			self.Velocity.X = 0
		
		_Object.Update(self)