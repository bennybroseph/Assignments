from System import *

oSystem = System()
	
def main():	
	oSystem.New(1)
	
	Data = ""
	
	for i in range(2000, 3200):
		if i % 7 == 0 and i % 5 > 0:
			Data += str(i) + ", "
	
	print(Data[:-2])
	
	oSystem.End()
	
	while True:
		try:
			oSystem.New(2)
		
			Array = []
			Tuple = ()
		
		
			Input = oSystem.getString("Please input some integers separated by a comma: ")

			SearchIndex = 0
			for i in range(0, len(Input)):
				if Input[i] == ',':
					Array.append(int(Input[SearchIndex:i]))
					Tuple += (int(Input[SearchIndex:i]),)
					SearchIndex = i + 1
				
			Array.append(int(Input[SearchIndex:]))
			Tuple += (int(Input[SearchIndex:]),)
				
			break
		except ValueError:
			print("\nPlease only input numbers in the accepted format...\n")
			oSystem.End()
	
	print(Array)
	print(Tuple)
	
	oSystem.End()
	
	oSystem.New(1)
		
	Input = oSystem.getString("No matter what you say, I'll print it in uppercase: ")
	oSystem.printString(Input)
	
	oSystem.End()

system('cls')
main()