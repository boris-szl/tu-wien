import math

def intbreak(n):
	return [k+1 for k in range(n)]

def reorder(n):
	int_to_list = [math.floor(n/(10**i))%10 for i in range(math.ceil(math.log(n,10))-1,-1,-1)]
	sorted_list = sorted(int_to_list, key=lambda x : (x % 2 == 0) )
	f = lambda x : (int(''.join(str(i) for i in sorted_list)))
	return f(n)

def main():
	# Testing intbreak(n)
	print(intbreak(10))


	# Testing reorder(n)
	print(reorder(364812))

if __name__ == "__main__": 
	main()