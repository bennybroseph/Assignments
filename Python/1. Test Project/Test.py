from graphics import *

def main():
    myPoint = Point(100, 100)
    win = GraphWin("ReadMe", 500, 500)
    while True:
        holdPoint = win.checkMouse()
        if holdPoint != None:
            myPoint = holdPoint

            text = Text(myPoint, "There is no escaping Bob Ross...")
            text.draw(win)
main()
