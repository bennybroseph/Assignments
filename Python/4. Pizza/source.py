from graphics import *
from math import *

WINDOW_WIDTH =  1280
WINDOW_HEIGHT = 720

ENTRY_SIZE = 10

DEFAULT_CONFIG = {"fill":"",
      "outline":"black",
      "width":"1",
      "arrow":"none",
      "text":"",
      "justify":"center",
      "font": ("helvetica", 12, "normal")}

def main():
	StudentFile = open('classNames.txt', 'r')
	
	Students = []
	for Student in StudentFile:
		Students.append(Student[:-1])
	
	Students.sort()
	StudentsText = []
	i = 0
	for Student in Students:
		StudentsText.append(Text(Point(WINDOW_WIDTH/2, (20*i) + 12), Students[i]))
		StudentsText[i].setTextColor("white")
		StudentsText[i].setFace("courier")
		StudentsText[i].draw(oWindow)
		
		i += 1
	
	PizzaFile = open('thePizza.txt', 'r')
	
	PizzaRadius = float(PizzaFile.readline()[:-1])
	PizzaCost = float(PizzaFile.readline()[:-1])
	
	PizzaText = Text(Point(175, WINDOW_HEIGHT/2), "What size pizza would you like?: ")
	PizzaText.setTextColor("white")
	PizzaText.setFace("courier")
	PizzaText.draw(oWindow)
	
	PizzaInput = Entry(Point(385, WINDOW_HEIGHT/2), ENTRY_SIZE)
	PizzaInput.setText("\"")
	PizzaInput.setFace("courier")
	PizzaInput.draw(oWindow)
	
	while(oWindow.checkKey() != "Return"):
		PizzaInput.setText(PizzaInput.getText()[:-1] + "\"")
	Input = float(PizzaInput.getText()[:-1])
	
	PizzaInput.undraw()
	
	PizzaText.setText("This Pizza costs " + str(PizzaCost/PizzaRadius * Input))
	PizzaText.move(
		WINDOW_WIDTH/2 - PizzaText.getAnchor().getX(), 
		WINDOW_HEIGHT/2 - PizzaText.getAnchor().getY())
	PizzaText.setTextColor("white")
	PizzaText.setSize(27)
	
	PizzaTextShadow = PizzaText.clone()
	PizzaTextShadow.setTextColor("black")
	PizzaTextShadow.setSize(28)
	
	PizzaCrustImage = Circle(Point(WINDOW_WIDTH/2, WINDOW_HEIGHT/2), Input*10)
	PizzaCrustImage.setFill("brown")
	PizzaCrustImage.setOutline("brown")
	PizzaCrustImage.draw(oWindow)

	PizzaImage = Circle(Point(WINDOW_WIDTH/2, WINDOW_HEIGHT/2), (Input*10)-15)
	PizzaImage.setFill("yellow")
	PizzaImage.setOutline("yellow")
	PizzaImage.draw(oWindow)
	
	Pepperoni = []
	Counter = 0
	for i in range(0, ceil((Input - 2)/ 3)):
		Pepes = (i * 6)+ 1
		Radius = i * 30
		for j in range(0, Pepes):
			Angle = (360/Pepes)*j
			Pepperoni.append(Circle(
				Point(
					WINDOW_WIDTH/2 + Radius * cos(radians(Angle)), 
					WINDOW_HEIGHT/2 + Radius * sin(radians(Angle))), 
				10))
			Pepperoni[Counter].setFill("red")
			Pepperoni[Counter].setOutline("red")
			Pepperoni[Counter].draw(oWindow)
			
			Counter += 1
	
	print(Counter)
	PizzaText.undraw()
	PizzaTextShadow.draw(oWindow)
	PizzaText.draw(oWindow)
	
	
	oWindow.getMouse()
	
oWindow = GraphWin("It's Time", WINDOW_WIDTH, WINDOW_HEIGHT)
oWindow.setBackground("black")

main()