import java.util.*;

public class Stack {
	private Vector items;

	// Konstruktor
	public Stack() {
		items = new Vector(10);
	}
	public Object push(Object item) {
		items.addElement(item);
		return item;
	}
	public Object pop() {
		int len = items.size();
		Object obj = null;
		if (len == 0)
			throw new EmptyStackException();
		obj = items.elementAt(len - 1);
		items.removeElementAt(len - 1);
		return obj;
	}
	public boolean isEmpty() {
		if (items.size() == 0)
			return true;
		else
			return false;
	}
}