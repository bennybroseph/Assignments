from Vector2D import *

def main():
	A = Vector2D(5, 3)
	B = Vector2D(2, 3)
	C = Lerp(A, B, 0.5)
	
	print(C.X, C.Y)
	
main()