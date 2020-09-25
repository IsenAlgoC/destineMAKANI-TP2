#include <stdio.h>

int main()
{/*utilisation boucle for*/
	int n = 100, s = 0, i;
	for (i = 1; i <= n; i++) {
		s += i;
	}
	printf("la somme des %d premiers entier avec la boucle for est %d \n", n, s);

	/*utilisation boucle while +valeur de nmax*/
	n = 0, i = 0;
	(unsigned short int) s = 0; 
	unsigned short int smax = 65535;
		while (s < smax) {
			n += 1;
			i += 1;
			s += i;
	}
	printf("la valeur de n max est %i \n",n);

	/*booucle for modifié */
	s = 0;
	printf("entrer une valeur de n");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		s += i;
	}
	printf("la somme des %d premiers entier avec la boucle for est %d \n", n, s);

	/*Recommencer tant que n est trop grand :*/
	s = 0;
	int nmax = 362;
	printf("entrer une valeur de n");
	scanf_s("%d", &n);
	while (n > nmax) {
		printf("entrer une valeur de n");
		scanf_s("%d", &n);
	}
	for (i = 1; i <= n; i++) {
		s += i;
	}
	printf("la somme des %d premiers entier avec la boucle for est %d \n", n, s);










	/*utilisation boucle do while*/

	s = 0;
	i = 0;
	n = 100;
	do {
		s += i;
		i += 1;
	} while (i <= 100);

	printf("la somme des %d premiers entier avec la boucle do while est %d \n", 100, s);
	return 0;

}




