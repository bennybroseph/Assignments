from BoundingBox import *

from os import system

def CheckCollisions(a_bbList):
	if (type(a_bbList) is list):
		
		ValuesTuple = []
		for i in range(0, len(a_bbList)):
			 ValuesTuple.append((a_bbList[i].Min.X, a_bbList[i]))
			 ValuesTuple.append((a_bbList[i].Max.X, a_bbList[i]))
		
		ValuesTuple.sort()
		
		ActiveObjectList = [ValuesTuple[0][1]]
		CollisionOnXTuple = []
		
		for j in range(0, len(a_bbList)):
			for i in range(1, len(ValuesTuple)):
				print(ValuesTuple[i][1].Tag, ActiveObjectList[0].Tag)
				input()
				if (ValuesTuple[i][1] != ActiveObjectList[0]):
					CollisionOnXTuple.append((ActiveObjectList[0], ValuesTuple[i][1]))
					ActiveObjectList[0].Image.setFill("red")
					ValuesTuple[i][1].Image.setFill("red")
				else:
					del ActiveObjectList[0]
					ActiveObjectList.append(ValuesTuple[i][1])
					break
				
		#print()		
		#input("End")
		
		#system("cls")