#include <stdio.h>

void vektorprodukt(int u[], int v[]) {
	int w_1, w_2, w_3;
	w_1 = u[1] * v[2] - u[2] * v[1];
	w_2 = u[0] * v[2] - u[2] * v[0];
	w_3 = u[0] * v[1] - u[1] * v[0]; 
	printf("w_1 = %d\n", w_1);
	printf("w_2 = %d\n", w_2);
	printf("w_3 = %d\n", w_3);
}

 	
int main() {

	int u[3];
	int v[3];
	printf("Einscannen des Vektors 'u'\n");
	for (int i=0; i < 3; i++) {
		scanf("%d", &u[i]);
	}
	printf("Einscannen des Vektors 'v'\n");
	for (int i=0; i < 3; i++) {
		scanf("%d", &v[i]);
	}
	vektorprodukt(u,v);
}