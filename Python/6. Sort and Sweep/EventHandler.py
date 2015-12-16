from Maths import *

# The '_'(underscore) is not needed, but you should not use this class directly...
class _EventHandler():
	def __init__(self):
		self.UpFlag 	= False
		self.DownFlag 	= False
		self.LeftFlag 	= False
		self.RightFlag 	= False
	
	def ParseInput(self, a_Key):
		if (a_Key == 'Up') and (not self.UpFlag):
			self.OnKeyDown(a_Key)
		elif (self.UpFlag):
			self.OnKeyUp('Up')
			
		if (a_Key == 'Down') and not(self.DownFlag):
			self.OnKeyDown(a_Key)
		elif (self.DownFlag):
			self.OnKeyUp('Down')
			
		if (a_Key == 'Left') and not(self.LeftFlag):
			self.OnKeyDown(a_Key)
		elif (self.LeftFlag):
			self.OnKeyUp('Left')
			
		if (a_Key == 'Right') and not(self.RightFlag):
			self.OnKeyDown(a_Key)
		elif (self.RightFlag):
			self.OnKeyUp('Right')
	
	def OnKeyDown(self, a_Key):
		if (a_Key == 'Up'):
			self.UpFlag = True
		if (a_Key == 'Down'):
			self.DownFlag = True
		if (a_Key == 'Left'):
			self.LeftFlag = True
		if (a_Key == 'Right'):
			self.RightFlag = True
	
	def OnKeyUp(self, a_Key):
		if (a_Key == 'Up'):
			self.UpFlag = False
		if (a_Key == 'Down'):
			self.DownFlag = False
		if (a_Key == 'Left'):
			self.LeftFlag = False
		if (a_Key == 'Right'):
			self.RightFlag = False