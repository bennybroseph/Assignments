import maths
from maths import *
from timeit import default_timer as timer

WINDOW_WIDTH =  600
WINDOW_HEIGHT = 600

STRANGE_OFFSET = 3

PLAYER_SPEED = 10
PLAYER_START = Point(53, 53)

PLAYER_RADIUS = 50

class Player():
	def __init__(self):
		self.Pos = PLAYER_START
		self.PrevPos = self.Pos
	
		self.Image = Circle(self.Pos, PLAYER_RADIUS)
		self.Image.draw(oWindow)
		
def Input():
	key = oWindow.checkKey()
	
	if(key == 'w') or (key == 'Up'):
		oPlayer.Image.move(0, -PLAYER_SPEED)
	if(key == 's') or (key == 'Down'):
		oPlayer.Image.move(0, PLAYER_SPEED)
	if(key == 'a') or (key == 'Left'):
		oPlayer.Image.move(-PLAYER_SPEED, 0)
	if(key == 'd') or (key == 'Right'):
		oPlayer.Image.move(PLAYER_SPEED, 0)
	
	if(key == 'Escape'):
		oWindow.close()

def Update():
	oPlayer.PrevPos = oPlayer.Pos
	oPlayer.Pos = oPlayer.Image.getCenter()

def CheckCollision():
	
	if(oPlayer.Pos.getX() > WINDOW_WIDTH - PLAYER_RADIUS):
		oPlayer.Image.move(WINDOW_WIDTH - PLAYER_RADIUS - oPlayer.Pos.getX(), 0)
	if(oPlayer.Pos.getX() < PLAYER_RADIUS + STRANGE_OFFSET):
		oPlayer.Image.move(PLAYER_RADIUS - oPlayer.Pos.getX() + STRANGE_OFFSET, 0)
		
	if(oPlayer.Pos.getY() > WINDOW_HEIGHT - PLAYER_RADIUS):
		oPlayer.Image.move(0, WINDOW_HEIGHT - PLAYER_RADIUS - oPlayer.Pos.getY())
	if(oPlayer.Pos.getY() < PLAYER_RADIUS + STRANGE_OFFSET):
		oPlayer.Image.move(0, PLAYER_RADIUS - oPlayer.Pos.getY() + STRANGE_OFFSET)
		
def LateUpdate():
	oPlayer.Pos = oPlayer.Image.getCenter()

def main():
	FPS = 0
	
	fCurrentTime = timer()	
	fPreviousTime = fCurrentTime

	while(True):
		fCurrentTime = timer()

		if(fCurrentTime - fPreviousTime >= 1):
			oTextFPS.setText("FPS: " + str(FPS))
			FPS = 0
			fPreviousTime = fCurrentTime

		FPS += 1

		Input()
		Update()
		
		CheckCollision()
		
		LateUpdate()

oWindow = GraphWin("It's Time", WINDOW_WIDTH, WINDOW_HEIGHT)
oWindow.setBackground("black")

oPlayer = Player()
oPlayer.Image.setOutline("white")
oPlayer.Image.setFill("white")

oTextFPS = Text(Point(WINDOW_WIDTH/2, 10), 0)
oTextFPS.draw(oWindow)
oTextFPS.setTextColor("white")

main()
