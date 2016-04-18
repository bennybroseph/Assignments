import sys, pygame, pygame.font, time
pygame.init()
pygame.font.init()

size = width, height = 1280, 720
speed = [2, 2]
black = 0, 0, 0

targetFPS = 120.0

screen = pygame.display.set_mode(size)
pygame.display.update()
pygame.display.set_caption("Pygame Test Program")
isFullScreen = False

ball = pygame.image.load("ball.bmp")
ballrect = ball.get_rect()

currentTime = time.time()
prevTime = currentTime
deltaTime = 0

currentFrames = 0
currentFPS = currentFrames
timeSinceLastUpdate = 0

myFont = pygame.font.Font("Pokemon_FireRed.ttf", 12)

while 1:
	currentFrames += 1
	
	prevTime = currentTime
	currentTime = time.time()
	
	deltaTime = currentTime - prevTime
	timeSinceLastUpdate += deltaTime

	for event in pygame.event.get():
		if event.type == pygame.QUIT: sys.exit()
		if event.type == pygame.KEYDOWN:
			if event.key == pygame.K_ESCAPE:sys.exit()
			if event.key == pygame.K_F10:
				if(isFullScreen):
					screen = pygame.display.set_mode(size)
					isFullScreen = False
				else:
					screen = pygame.display.set_mode(size, pygame.FULLSCREEN)
					isFullScreen = True
		
	ballrect = ballrect.move(speed)
	if ballrect.left < 0 or ballrect.right > width:
		speed[0] = -speed[0]
	if ballrect.top < 0 or ballrect.bottom > height:
		speed[1] = -speed[1]
	
	if(timeSinceLastUpdate >= 1):
		currentFPS = currentFrames
		
		currentFrames = 0
		timeSinceLastUpdate = 0	
	
	fpsText = myFont.render("FPS: " + str(currentFPS), 0, (255, 255, 255))
	fpsTextEraser = myFont.render("FPS: " + str(currentFPS), 0, (0, 0, 0))
	
	fpsTextRect = fpsText.get_rect()
	fpsTextRect.move_ip(width / 2, 10)

	screen.fill(black)
	screen.blit(ball, ballrect)
	screen.blit(fpsText, (fpsTextRect.x - (fpsTextRect.width / 2), fpsTextRect.y - (fpsTextRect.height / 2)))
	
	pygame.display.flip()	
	
	#screen.blit(fpsTextEraser, (fpsTextRect.x - (fpsTextRect.width / 2), fpsTextRect.y - (fpsTextRect.height / 2)))
	
	if(deltaTime < (1000 / targetFPS) / 1000):
		time.sleep((1000 / targetFPS) / 1000 - deltaTime)