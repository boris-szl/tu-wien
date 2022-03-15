

class HelloName {
	public static void main(String[] args) {
		if (args.length > 0) {
			System.out.println("Hallo " + args[0]);
		} else {
			System.out.println("Hello World");
		}
	}
}