#include <stdio.h>


int evenorodd(int n); // Deklaration der Funktion evenorodd

int main() {
	int n;
	printf("Gib eine beliebige natürliche Zahl ein\n");
	scanf("%d", &n);
	if (evenorodd(n) == 0 ) {
		printf("Rückgabewert: %d, d.h. die Zahl %d ist ungerade.\n", evenorodd(n), n);
	} else {
		printf("Rückgabewert: %d, d.h. die Zahl %d ist gerade.\n", evenorodd(n), n);
	}
}

// Definition der Funktion
int evenorodd(int n) {
	if (n%2 == 0) {
		return 1;
	} else {
		return 0;
	}
}