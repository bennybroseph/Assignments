from os import system

class System:
	def __init__(self, a_Lines = 11):		
		Lines = a_Lines # Doesn't affect anything currently
		
	def getString(self, a_Prompt):
		return input(a_Prompt)
		
	def printString(self, a_String):
		print(a_String.upper())
	
	def New(self, a_Index):	
		print("Question", str(a_Index) + ".")
		
		if a_Index <= 9:
			print("-----------")
		else:
			print("------------")

	def End(self):	
		system('pause')
		
		system('cls')