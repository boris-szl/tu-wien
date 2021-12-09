#include <iostream>
#include "triangle.cpp"


using std::cout;
using std::cin;
using std::endl;



int main() {
	Triangle tri;
	tri.setA(12.0, 1.0);
	tri.setB(1.0, 1.0);
	tri.setC(1.0, 1.0);
	cout<<"area = "<<tri.getArea()<<endl;
	cout<<"perimeter = "<<tri.getPerimeter()<<endl;
	cout<<"equilateral triangle = "<<tri.isEquilateral()<<endl;
	return 0;
}



/* Testing

Fläche gleich Null?

Ja, möglich,
Das die Summe von zwei der drei Vektoren mit dem dritten identisch ist. 
Was bei einem Dreieck, welches durch Vektoren gebildet wird durchaus vorkommen kann.
Es handelt sich um Vektoren, nicht um Seitenlängen!


*/