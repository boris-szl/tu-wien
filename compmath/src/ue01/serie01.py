import math
import time
import copy
from time_measurement import *

def wallTime(paramter_to_pass, function_to_call):
	start_time = time.time()
	function_to_call(paramter_to_pass)
	end_time = time.time()
	print( f"Wall time {end_time - start_time} ")

def processTime(paramter_to_pass, function_to_call):
	start_time = time.process_time()
	function_to_call(paramter_to_pass)
	end_time = time.process_time()
	print(f"Process time {end_time - start_time }")

# Problem 1
def intbreak(n):
	return [k+1 for k in range(n)]

def reorder(n):
	int_to_list = [math.floor(n/(10**i))%10 for i in range(math.ceil(math.log(n,10))-1,-1,-1)]
	sorted_list = sorted(int_to_list, key=lambda x : (x % 2 == 0) )
	f = lambda x : (int(''.join(str(i) for i in sorted_list)))
	return f(n)

# Problem 2


def main():
	n = 364812
	# # Testing intbreak(n)
	# print(intbreak(10))

	# # Testing reorder(n)
	# print(reorder(n))

	# # Testing reorder2(n)
	# print(reorder(n))

	# # Wall Time && Process Time
	# wallTime(n,reorder)
	# processTime(n,reorder)

	def f(*args):
		print(type(args))
		print(args)

	f(1,2,3)
	f([1],3,4,'hello')

	def polynom(x, *args):
		n = len(args)
		val = 0.0

		print(type(args))
		for k in range(n):
			val += args[k]*x**k

		return val

	a = (1,2,3,4)
	print(polynom(0.1,*a))

	polynom_time = calculate_time(polynom)
	polynom_time(0.1, *a)

	reorder_time = calculate_time(reorder)
	reorder_time(n)



if __name__ == "__main__": 
	main()