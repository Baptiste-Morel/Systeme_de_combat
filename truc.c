#include <stdio.h>

int main(){
	int hpJoueur;
	int attaqueSimple;

	hpJoueur=100;
	attaqueSimple=50;

	printf("Un Monstre mechant pas beau apparait.\n");
	printf("Vous avez 100 points de vie \n");
	printf("Le monstre vous lance une attaque simple, vous perdez 50 points de vie.\n");
	hpJoueur -= attaqueSimple;
	printf("Il vous reste ");
	printf("%d",hpJoueur);
	printf(" points de vie");

	return 0;
}
