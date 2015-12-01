from graphics import *

def FromSeconds(a_Seconds):
	Hours =   int(a_Seconds/60/60)
	a_Seconds -= Hours*60*60
	
	Minutes = int(a_Seconds/60)
	a_Seconds -= Minutes*60
	
	Seconds = a_Seconds
	
	return (Hours, Minutes, Seconds)
def PrintFromSeconds(a_Seconds):
	Time = FromSeconds(a_Seconds)
	print("Hours: " + str(Time[0]), "Minutes: " + str(Time[1]), "Seconds: " + str(Time[2]))
	return Time