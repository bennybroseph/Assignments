from BoundingBox import *

from os import system

def CheckCollisions(a_bbList, a_PrevCollisions):
	if (type(a_bbList) is list and type(a_PrevCollisions) is list):
		
		ValuesTupleX = []
		ValuesTupleY = []
		for i in range(0, len(a_bbList)):
			a_bbList[i].Color = "blue"
			
			ValuesTupleX.append((a_bbList[i].Min.X, a_bbList[i]))
			ValuesTupleX.append((a_bbList[i].Max.X, a_bbList[i]))
			
			ValuesTupleY.append((a_bbList[i].Min.Y, a_bbList[i]))
			ValuesTupleY.append((a_bbList[i].Max.Y, a_bbList[i]))
		
		ValuesTupleX.sort()
		ValuesTupleY.sort()
		
		ActiveObjectDictionary = {ValuesTupleX[0][1].Tag: ValuesTupleX[0][1]}
		CollisionOnXTuple = []
		
		for i in range(1, len(ValuesTupleX)):
			try:
				ActiveObjectDictionary[ValuesTupleX[i][1].Tag]				
			except KeyError:
				for key, value in ActiveObjectDictionary.items():
					#print(key, ValuesTupleX[i][1].Tag, "Collision")
					CollisionOnXTuple.append((value, ValuesTupleX[i][1]))
				ActiveObjectDictionary[ValuesTupleX[i][1].Tag] = ValuesTupleX[i][1]
			else:
				#print(ValuesTupleX[i][1].Tag, "Erase Element")
				del ActiveObjectDictionary[ValuesTupleX[i][1].Tag]
			#input()	
		
		ActiveObjectDictionary = {ValuesTupleY[0][1].Tag: ValuesTupleY[0][1]}
		CollisionOnYTuple = []
		
		for i in range(1, len(ValuesTupleY)):
			try:
				ActiveObjectDictionary[ValuesTupleY[i][1].Tag]				
			except KeyError:
				for key, value in ActiveObjectDictionary.items():
					#print(key, ValuesTupleY[i][1].Tag, "Collision")
					CollisionOnYTuple.append((value, ValuesTupleY[i][1]))
				ActiveObjectDictionary[ValuesTupleY[i][1].Tag] = ValuesTupleY[i][1]
			else:
				#print(ValuesTupleY[i][1].Tag, "Erase Element")
				del ActiveObjectDictionary[ValuesTupleY[i][1].Tag]
			#input()
			
		for i in range(0, len(CollisionOnXTuple)):
			CollisionOnXTuple[i][0].Color = "red"
			CollisionOnXTuple[i][1].Color = "red"
		
		for i in range(0, len(CollisionOnYTuple)):
			if CollisionOnYTuple[i][0].Color == "red":
				CollisionOnYTuple[i][0].Color = "orange"
			elif CollisionOnYTuple[i][0].Color != "orange":
				CollisionOnYTuple[i][0].Color = "yellow"
				
			if CollisionOnYTuple[i][1].Color == "red":				
				CollisionOnYTuple[i][1].Color = "orange"
			elif CollisionOnYTuple[i][1].Color != "orange":
				CollisionOnYTuple[i][1].Color = "yellow"
		
		ActualCollisionTuple = []
		for i in range(0, len(CollisionOnXTuple)):
			for j in range(0, len(CollisionOnYTuple)):
				if ((CollisionOnXTuple[i][0] == CollisionOnYTuple[j][0] and CollisionOnXTuple[i][1] == CollisionOnYTuple[j][1]) or
					(CollisionOnXTuple[i][1] == CollisionOnYTuple[j][0] and CollisionOnXTuple[i][0] == CollisionOnYTuple[j][1])):
					CollisionOnXTuple[i][0].Color = "green"
					CollisionOnXTuple[i][1].Color = "green"
					
					ActualCollisionTuple.append((CollisionOnXTuple[i][0], CollisionOnXTuple[i][1]))
					
		if ActualCollisionTuple != a_PrevCollisions:
			for i in range(0, len(ActualCollisionTuple)):
				print(ActualCollisionTuple[i][0].Tag, "colliding with", ActualCollisionTuple[i][1].Tag)
			print()
		return ActualCollisionTuple