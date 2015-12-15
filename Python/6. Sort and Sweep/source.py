from graphics import *

from Maths import *
from BoundingBox import *

from Player import *
from Enemy import *

from os import system

from timeit import default_timer as timer

WINDOW_SIZE = Vector2D(600, 600)

STRANGE_OFFSET = 3

PLAYER_SPEED = 10
PLAYER_START = Vector2D(53, 53)

PLAYER_SIZE = Vector2D(50, 50)

ENEMY_MIN = Vector2D(50, 50)
ENEMY_MAX = WINDOW_SIZE - 50

ENEMY_SIZE = PLAYER_SIZE

NUM_ENEMIES = 15
		
def Input():
	key = oWindow.checkKey()
	
	if(key == 'w') or (key == 'Up'):
		oPlayer.Velocity = Vector2D(0, -PLAYER_SPEED)
	if(key == 's') or (key == 'Down'):
		oPlayer.Velocity = Vector2D(0, PLAYER_SPEED)
	if(key == 'a') or (key == 'Left'):
		oPlayer.Velocity = Vector2D(-PLAYER_SPEED, 0)
	if(key == 'd') or (key == 'Right'):
		oPlayer.Velocity = Vector2D(PLAYER_SPEED, 0)
	
	if(key == 'Escape'):
		oWindow.close()

def Update():
	oPlayer.Update()
	
	for i in range(0, NUM_ENEMIES):
		oEnemies[i].Update()

def CheckCollision():
	dummy = 1
		
def LateUpdate():
	oPlayer.LateUpdate()
	
	for i in range(0, NUM_ENEMIES):
		oEnemies[i].LateUpdate()

def main():
	FPS = NULL
	
	fCurrentTime = timer()	
	fPreviousTime = fCurrentTime
	
	for i in range(0, NUM_ENEMIES):
		oEnemies.append(Enemy(ENEMY_MIN, ENEMY_MAX, ENEMY_SIZE))
		
		oEnemies[i].Image.draw(oWindow)
			
	oPlayer.Image.draw(oWindow)
		
	while(True):
		fCurrentTime = timer()

		if(fCurrentTime - fPreviousTime >= 1):
			oTextFPS.setText("FPS: " + str(FPS))
			FPS = 0
			fPreviousTime = fCurrentTime

		FPS += 1

		Input()
		Update()
		LateUpdate()
		
		CheckCollision()
		
		LateUpdate()

oWindow = GraphWin("It's Time", WINDOW_SIZE.X, WINDOW_SIZE.Y)
oWindow.setBackground("black")

oPlayer = Player(PLAYER_START, PLAYER_SIZE)

oEnemies = []

oTextFPS = Text(Point(WINDOW_SIZE.X/2, 10), 0)
oTextFPS.draw(oWindow)
oTextFPS.setTextColor("white")

seed()

main()
