#include <stdio.h>

void main () {
	
	float money;
	int bottles;
	float change;
	
	int c20, c10, c5, c1;
	
	printf("Inserisci il denaro a disposizione: ");
	scanf("%f", &money);
	
	money = money * 100;
	bottles = money / 40;
	printf("Bottiglie: %d\n", bottles);
	
	change = money - (bottles * 40);
	
	printf("Resto totale: %f\n", change);
	
	c20 = change/20;
	change = change - c20 * 20;
	c10 = change/10;
	change = change - c10*10;
	c5 = change/5;
	change = change - c5*5;
	c1 = change;
	
	printf("20c: %d, 10c: %d, 5c: %d, 1c: %d", c20, c10, c5, c1);
}


