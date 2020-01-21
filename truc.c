#include <stdio.h>

int main(){
	int hpJoueur;
	int attaqueMonstre;
	int attaqueJoueur;
	int hpMonstre;

	hpJoueur=100;
	attaqueMonstre=50;
	attaqueJoueur=50;
	hpMonstre=100;

	printf("Un Monstre mechant pas beau apparait.\n");
	printf("Vous avez 100 points de vie \n");
	printf("Vous attaquez en premier\n");
	printf("----------------\n");
	printf("Vous attaquez... -50 points de vie au monstre ! Le monstre a ");
	hpMonstre-=attaqueJoueur;
	printf("%d",hpMonstre);
	printf(" points de vie restant\n");
	printf("----------------\n");

	if (hpMonstre <= 0)
     {
       printf ("Le monstre a peri...\n");
     }
		 else if (hpJoueur <= 0)
	 {
	     printf("Vous avez peri...");
	 }
     else {

	hpJoueur-=attaqueMonstre;
	printf("Le monstre attaque... vous perdez 50 points de vie ! Vous avez %d sur 100 points de vie \n", hpJoueur);
	printf("----------------\n");

	if (hpMonstre <= 0)
     {
       printf ("Le monstre a peri...\n");
     }
		 else if (hpJoueur <= 0)
	 {
	     printf("Vous avez peri...");
	 }
     else {

	printf("Vous attaquez... -50 points de vie au monstre ! Le monstre a ");
	hpMonstre-=attaqueJoueur;
	printf("%d",hpMonstre);
	printf(" points de vie restant\n");

	if (hpMonstre <= 0)
     {
       printf ("Le monstre a peri...\n");
     }
		 else if (hpJoueur <= 0)
	 {
	     printf("Vous avez peri...");
	 }
     else {
			 hpJoueur-=attaqueMonstre;
		 	printf("Le monstre attaque... vous perdez 50 points de vie ! Vous avez %d sur 100 points de vie \n", hpJoueur);
		 	printf("----------------\n");
	}
}}
	return 0;
}
