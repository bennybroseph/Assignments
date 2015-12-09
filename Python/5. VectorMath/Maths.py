from Vector2D import *
from Vector3D import *
from Vector4D import *

def Dot(ValueA, ValueB):
	# Differentiating between 'Vector2D', 'Vector3D' and 'Vector4D' for the 'Dot' function
	if (type(ValueA) is Vector2D) == True and (type(ValueB) is Vector2D) == True:
		return (ValueA.X * ValueB.X) + (ValueA.Y * ValueB.Y)
	elif (type(ValueA) is Vector3D) == True and (type(ValueB) is Vector3D) == True:
		return (ValueA.X * ValueB.X) + (ValueA.Y * ValueB.Y) + (ValueA.Z * ValueB.Z)
	elif (type(ValueA) is Vector4D) == True and (type(ValueB) is Vector4D) == True:
		return  (ValueA.X * ValueB.X) + (ValueA.Y * ValueB.Y) + (ValueA.Z * ValueB.Z) +	(ValueA.T * ValueB.T)

def Cross(ValueA, ValueB):
	# Confirming that only a 'Vector3D' can be used for the 'Cross' function
	if (type(ValueA) is Vector3D) == True and (type(ValueB) is Vector3D) == True:
		return Vector3D(
			(ValueA.Y * ValueB.Z) - (ValueA.Z * ValueB.Y),
			(ValueA.Z * ValueB.X) - (ValueA.X * ValueB.Z),
			(ValueA.X * ValueB.Y) - (ValueA.Y * ValueB.X))
	
def Lerp(ValueA, ValueB, t):
	if (type(t) is int) == True or (type(t) is float) == True:
		# Differentiating between 'Vector2D', 'Vector3D', 'Vector4D' and 'int'/'float' for the 'Lerp' function
		if (type(ValueA) is Vector2D) == True and (type(ValueB) is Vector2D) == True:
			return Vector2D(
				(1 - t) * ValueA.X + t * ValueB.X,
				(1 - t) * ValueA.Y + t * ValueB.Y)
		elif (type(ValueA) is Vector3D) == True and (type(ValueB) is Vector3D) == True:
			return Vector3D(
				(1 - t) * ValueA.X + t * ValueB.X,
				(1 - t) * ValueA.Y + t * ValueB.Y,
				(1 - t) * ValueA.Z + t * ValueB.Z)
		elif (type(ValueA) is Vector4D) == True and (type(ValueB) is Vector4D) == True:
			return Vector4D(
				(1 - t) * ValueA.X + t * ValueB.X,
				(1 - t) * ValueA.Y + t * ValueB.Y,
				(1 - t) * ValueA.Z + t * ValueB.Z,
				(1 - t) * ValueA.T + t * ValueB.T)
		elif (((type(ValueA) is int) == True or (type(ValueA) is float)) == True and 
				 ((type(ValueB) is int) == True or (type(ValueB) is float)) == True):
			return (1 - t) * ValueA + t * ValueB
			
def ToDegrees(ValueA):
	if (type(ValueA) is int) == True or (type(ValueA) is float) == True:
		return ValueA * (180/pi)

def ToRadians(ValueA):
	if (type(ValueA) is int) == True or (type(ValueA) is float) == True:
		return ValueA * (pi/180)
		
def NearestPow(ValueA, X = 2):
	if ((type(ValueA) is int) == True or (type(ValueA) is float) == True and
		(type(X) is int) == True):
		return int(X ** floor(ValueA ** (1.0/X)))