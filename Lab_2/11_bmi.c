#include <stdio.h>
/*Scrivere un programma C che chiede all’utente un
valore che rappresenta il peso in Kg e un valore
che rappresenta l’Altezza in metri e calcola l’indice
di massa corporeo, BMI = peso/ altezza^2*/
/*Scrivere un programma C che chiede all’utente un
valore che rappresenta il peso in Kg e un valore
che rappresenta l’Altezza in metri e calcola l’indice
di massa corporeo, BMI = peso/ altezza^2*/

int main(void){
	float peso;
	float altezza;
	float BMI;

	printf("Inserisci il peso: \n");
	scanf("%f", &peso);

	printf("Inserisci l'altezza: \n");
	scanf("%f", &altezza);
	
	BMI = peso / (altezza*altezza);
	printf("IL BMI corrispondente ad una altezza di %.2f e ad un peso di %.2f e' pari a %.2f\n", altezza, peso, BMI  );
	
	return 0;
}


