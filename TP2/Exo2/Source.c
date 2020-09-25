#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
void permutter(float*A,float*B)
{
	float Tmp;
	Tmp = *A;
	*A = *B;
	*B = Tmp;
}
int main() {
	int n;
	int i = 0;
	printf("nombre de bagage a verrifier\n");
	scanf_s("%d", &n);


	for (int i =1;i < n+1;i++) 
	{
		float Hauteur, Longueur, Profondeur;
		bool Bhauteur = false, Blongueur = false, BProfondeur = false;
		printf("/////verification de la %d eme valise//////\n\n", i);

		printf("hauteur:\n");
		scanf_s("%f", &Hauteur);

		while ((Hauteur < 1) || (Hauteur > 150))
		{
			printf("la hauteur n'est aps comprise entre 1cm et 150 cm:\n");
			scanf_s("%f", &Hauteur);
		}

		printf("longueur:\n");
		scanf_s("%f", &Longueur);

		while ((Longueur < 1) || (Longueur > 150))
		{
			printf("la hauteur n'est aps comprise entre 1cm et 150 cm:\n");
			scanf_s("%f", &Longueur);
		}

		printf("Profondeur:\n");
		scanf_s("%f", &Profondeur);

		while ((Profondeur < 1) || (Profondeur > 150))
		{
			printf("la profondeur n'est aps comprise entre 1cm et 150 cm:\n");
			scanf_s("%f", &Profondeur);
		}

		if (Hauteur < Longueur)
		{
			permutter(&Hauteur, &Longueur);
		}
		if (Hauteur < Profondeur)
		{
			permutter(&Hauteur, &Profondeur);
		}
		if (Profondeur > Longueur)
		{
			permutter(&Profondeur, &Longueur);
		}

		if (Hauteur < 56)
		{
			Bhauteur = true;
		}
		if (Longueur < 36)
		{
			Blongueur = true;
		}
		if (Profondeur < 26)
		{
			BProfondeur = true;
		}

		if ((Bhauteur) && (Blongueur) && (BProfondeur))
		{
			printf("la taille de la %d eme valise est conforme\n\n",i);
		}
		else
		{
			printf("la t'aille de la %d eme n'est pas conforme\n\n",i);
		}
	}

	system("pause");
	return(EXIT_SUCCESS);
}
