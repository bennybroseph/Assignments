from Collision import *

from Player import *
from Enemy import *

from timeit import default_timer as timer

WINDOW_SIZE = Vector2D(600, 600)

STRANGE_OFFSET = 3

PLAYER_SPEED = 10
PLAYER_START = Vector2D(53, 53)

PLAYER_SIZE = Vector2D(50, 50)

ENEMY_MIN = Vector2D(50, 50)
ENEMY_MAX = WINDOW_SIZE - 50

ENEMY_SIZE = PLAYER_SIZE

NUM_ENEMIES = 5
		
def Input():
	Key = oWindow.checkKey()
	
	if(Key == 'Escape'):
		oWindow.close()
		
	oPlayer.ParseInput(Key)

def Update():
	oPlayer.Update()
	
	for i in range(0, NUM_ENEMIES):
		oEnemies[i].Update()
		
def LateUpdate():
	oPlayer.LateUpdate()
	
	for i in range(0, NUM_ENEMIES):
		oEnemies[i].LateUpdate()

def main():
	seed()
	
	FPS = NULL
	
	fCurrentTime = timer()	
	fPreviousTime = fCurrentTime
	
	for i in range(0, NUM_ENEMIES):
		oEnemies.append(Enemy(ENEMY_MIN, ENEMY_MAX, ENEMY_SIZE))
		
		oEnemies[i].Image.draw(oWindow)
			
	oPlayer.Image.draw(oWindow)
	
	for i in range(0, len(oEnemies)):		
		oEnemies[i].bbBoundingBox.Image.draw(oWindow)
		oEnemies[i].bbBoundingBox.Tag = "Enemy "+str(i)
		
	oPlayer.bbBoundingBox.Image.draw(oWindow)
	oPlayer.bbBoundingBox.Tag = "Player"
	
	bbList = []
	while(oWindow.isOpen()):
		fCurrentTime = timer()

		if(fCurrentTime - fPreviousTime >= 1):
			oTextFPS.setText("FPS: " + str(FPS))
			FPS = 0
			fPreviousTime = fCurrentTime

		FPS += 1

		Input()
		Update()
		LateUpdate()
		
		bbList = []
		
		bbList.append(oPlayer.bbBoundingBox)
		for i in range(0, len(oEnemies)):
			bbList.append(oEnemies[i].bbBoundingBox)
		
		CheckCollisions(bbList)
		
		LateUpdate()
	
	return 0

oWindow = GraphWin("It's Time", WINDOW_SIZE.X, WINDOW_SIZE.Y)
oWindow.setBackground("black")

oPlayer = Player(PLAYER_START, PLAYER_SIZE)

oEnemies = []

oTextFPS = Text(Point(WINDOW_SIZE.X/2, 10), 0)
oTextFPS.draw(oWindow)
oTextFPS.setTextColor("white")

main()
