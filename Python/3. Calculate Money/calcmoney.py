from graphics import *

def FromPennies(a_Pennies):
	Quarters =   int(a_Pennies/25)
	a_Pennies -= Quarters*25
	
	Dimes = int(a_Pennies/10)
	a_Pennies -= Dimes*10
	
	Nickles = int(a_Pennies/5)
	a_Pennies -= Nickles*5
	
	Pennies = a_Pennies
	
	return (Quarters, Dimes, Nickles, Pennies)
def PrintFromPennies(a_Pennies):
	Money = FromPennies(a_Pennies)
	print("Quarters: " + str(Money[0]), "Dimes: " + str(Money[1]), "Nickles: " + str(Money[2]), "Pennies: " + str(Money[3]))
	return Money