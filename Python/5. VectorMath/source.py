from Maths import *
from os import system

def main():
	system('cls')
	
	print("Vector2D")
	print("----------------------------------------")
	
	A = Vector2D(5, 5)
	B = Vector2D(3, 1)
	
	print("A =", A, "B =", B)
	print("Dot Product:", Dot(A, B))
	print("Nomilization of A:", A.Normalize())
	print("Cross Product:", Cross(A, B))
	print("Magnitude of A:", A.Magnitude())
	
	print()
	print("Arithmatic:")
	print("A + B:", A + B)
	print("A - B:", A - B)
	print("A * B:", A * B)
	print("A / B:", A / B)
	
	print()
	system('pause')
	system('cls')
	
	print("Vector3D")
	print("----------------------------------------")
	
	A = Vector3D(5, 5, 5)
	B = Vector3D(3, 1, 2)
	
	print("A =", A, "B =", B)
	print("Dot Product:", Dot(A, B))
	print("Nomilization of A:", A.Normalize())
	print("Cross Product:", Cross(A, B))
	print("Magnitude of A:", A.Magnitude())
	
	print()
	print("Arithmatic:")
	print("A + B:", A + B)
	print("A - B:", A - B)
	print("A * B:", A * B)
	print("A / B:", A / B)
	
	print()
	system('pause')
	system('cls')
	
	print("Vector4D")
	print("----------------------------------------")
	
	A = Vector4D(5, 5, 5, 5)
	
	print("A =", A)
	print("Nomilization of A:", A.Normalize())
	
	Color = hex(0x34EA4AFF)
	A = Vector4D(Color)
	
	print("A constructed from " + Color + ":", A)
	
	print()
	system('pause')
	system('cls')
	
	
main()