
# Simple default evaluation for ascending order of the values
def DefaultEval(a_Arg1, a_Arg2):
	if	a_Arg1 > a_Arg2:
		return True
	else:
		return False

# Takes an array of values and delegate/function pointer/??? and uses that to test if the values should be swapped
# The default sort evaluation is ascending by using 'DefaultEval' as the function
# Sorted using bubble sort
def Sort(a_Array, a_EvalFunc = DefaultEval):

	for j in range(len(a_Array) - 1, 0, -1):
		for i in range(j):
			if a_EvalFunc(a_Array[i], a_Array[i+1]):
				temp = a_Array[i]
				a_Array[i] = a_Array[i+1]
				a_Array[i+1] = temp
			
	print
	for i in range(0, len(a_Array)):
		print a_Array[i]


def main():
	array = [0, 1, 3, 4, 2, 8, 5, 22, 12, 11, 15]
	
	Sort(array)
	
main()