import maths
from maths import *
from timeit import default_timer as timer

WINDOW_WIDTH =  600
WINDOW_HEIGHT = 600

class Player():
	def __init__(self):
		self.PrevPos = Point(55, 55)
		self.Pos = 	   Point(55, 55)
	
		self.Image = Circle(Point(55, 55), 50)
		self.Image.draw(oWindow)
    
def Input():
	key = oWindow.checkKey()

	if(key == 'w'):
		oPlayer.Image.move(0, -1)
	if(key == 's'):
		oPlayer.Image.move(0, 1)
	if(key == 'a'):
		oPlayer.Image.move(-1, 0)
	if(key == 'd'):
		oPlayer.Image.move(1, 0)

def Update():
	oPlayer.PrevPos = oPlayer.Pos
	oPlayer.Pos = oPlayer.Image.getCenter()

def CheckCollision():
	if(oPlayer.Pos.getX() > 600)

def LateUpdate():


def main():
	FPS = 0
	
	fCurrentTime = timer()	
	fPreviousTime = fCurrentTime

	while(True):
		fCurrentTime = timer()

		if(fCurrentTime - fPreviousTime >= 1):
			print(FPS)
			FPS = 0
			fPreviousTime = fCurrentTime

		FPS += 1

		Input()
		Update()
		
		CheckCollision()
		
		LateUpdate()

oWindow = GraphWin("It's Time", WINDOW_WIDTH, WINDOW_HEIGHT)

oPlayer = Player()

main()
