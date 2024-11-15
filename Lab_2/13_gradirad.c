#include <stdio.h>
#define PI 3.14
#define ANGOLO_PIATTO 180

int main ( ) {
	float gradi, radianti;
	scanf ("%f", &gradi);
	radianti = gradi*PI/ANGOLO_PIATTO;
	printf ("%f gradi sono %f radianti", gradi,radianti);
	return(0);
}