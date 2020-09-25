#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int x, deviner;
	srand((unsigned)time(NULL));
	x = rand();
	printf("la valeur genere est %d \n", x);
	printf("donner une valeur \n");
	scanf_s("%d", &deviner);
	while (deviner !=!x) {
		if (deviner > x) {
			printf("c'est moins \n");
			printf("donner une valeur \n");
			scanf_s("%d", &deviner);

		}
		else if (deviner < x) {
			printf("c'est plus \n");
			printf("donner une valeur \n");
			scanf_s("%d", &deviner);

		}
		if (deviner = x) {
			printf("CEST GAGNE");
			break;
		}
	}

		return 0;

	}