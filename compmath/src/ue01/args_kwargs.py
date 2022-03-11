import math
import measuring_time




def main():

	def polynomial(x,*args):
		n = len(args) # max exponent == to length of coefficients
		val = 0.0
		print(type(args))
		for k in range(n):
			val += args[k]*x**k

		return val

	a = [1,2,3,4]
	print(polynomial(0.1, *a))
	print(polynomial(0.1, *a))







if __name__ == "__main__":
	main()