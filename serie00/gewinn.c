#include <stdio.h>



int main() {

	double gewinn;
	int freunde;
	double gewinnanteil;
	printf("Eingabe der Anzahl von Freunden:\n");
	scanf("%d",&freunde);
	printf("Eingabe des auszubezahlende Gewinns:\n");
	scanf("%d", &gewinn);
	gewinnanteil = gewinn / freunde;
	printf("Der Anteil deines Gewinns beträgt: € %f\n", gewinnanteil);

	return 0;

}

