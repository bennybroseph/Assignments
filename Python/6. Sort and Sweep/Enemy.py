from graphics import *

from Maths import *
from BoundingBox import *
from Object import _Object

from random import *

class Enemy(_Object):
	def __init__(self, a_RandomMin, a_RandomMax, a_Size):
		_Object.__init__(self, Vector2D(randint(a_RandomMin.X, a_RandomMax.X), randint(a_RandomMin.Y, a_RandomMax.Y)), a_Size)
		
		self.Image.setOutline("red")
		self.Image.setFill("white")