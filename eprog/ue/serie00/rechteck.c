#include <stdio.h>



float areaSquare(float length, float width) {
	return length * width;
}


int main() {

	float length, width;
	printf("Länge: ");
	scanf("%f", &length);
	printf("Breite: ");
	scanf("%f", &width);
	printf("The area is %f\n", areaSquare(length, width));

}