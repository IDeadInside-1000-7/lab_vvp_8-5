#include <stdio.h>
#include <math.h>
void main()
{
	printf("Vvedite trehznachnoe chislo (snachala sothi, potom desyatki, zatem edinitsi)\n");
	int change, a[4] = { 0, 0, 0, 0};
	printf("Sotni = ");
	scanf("%i", &a[0]);
	printf("Desyatki = ");
	scanf("%i", &a[1]);
	printf("Edinitsi = ");
	scanf("%i", &a[2]);
	printf("Vashe chislo = ");
	printf("%i%i%i\n", a[0], a[1], a[2]);
	change = a[0];
	a[3] = change;
	printf("Resultat: ");
	printf("%i%i%i", a[1], a[2], a[3]);
}