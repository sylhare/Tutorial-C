/*
 * File:   Word_Manipulation.c
 * Author: isen
 *
 * Created on November 2, 2011, 2:58 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define N 3


char my_tolower(char lettre);
char my_toupper(char lettre);
int my_strlen(const char *texte);
void my_strcpy(char *dest, const char *source);
char *my_strncpy(char *dest, const char *source, int i);
void my_strcat(char *dest, const char *source);
void my_strncat(char *dest, const char *source, int taille );
char *my_strchr(char *source, char c);

/*
 *
 */
int main(int argc, char** argv) {

	char lettre = 'H', lettre1 = 's';
	char texte[50] = "Teck", texte2[50] = "Thet", texte3[50] = "That";
	char dest[50], my_dest[50], my_copy[50], copy[50];

	printf("Reproducing basing functions\nFunction\t Var: my_function -   normal\n\n");

	printf("toLower  \t %c: \t%c\t -\t%c\n", lettre, my_tolower(lettre), tolower(lettre));
	printf("toUpper  \t %c: \t%c\t -\t%c\n", lettre1, my_toupper(lettre1), toupper(lettre1));
	printf("strlen   \t %s: \t%d\t -\t%d\n", texte, my_strlen(texte), strlen(texte));
	
	my_strcpy(my_copy,texte);
	strcpy(copy, texte);
	printf("strcpy   \t %s: \t%s\t -\t%s\n", texte, my_copy, copy);

	printf("strncpy  \t %d: \t%s\t - \t%s\t\n", N, my_strncpy(my_dest,texte,N), strncpy(dest,texte, N));

	strcat(texte3, texte);
	my_strcat(texte2, texte);
	printf("strcat   \t %s: \t%s -\t%s\n", texte, texte2, texte3);

	my_strncat(my_copy,texte3,N);
	strncat(copy,texte3, N);
	printf("strncat  \t %d: \t%s  - \t%s\t\n", N, my_copy, copy);

	printf("strchr  \t e: \t%s\t -\t%s\n", my_strchr(texte,'e'), strchr(texte,'e'));

	return (EXIT_SUCCESS);
}

char my_tolower(char lettre) {                                // mettre en minuscule un caractère "lettre"


	if (90 >= lettre && lettre >= 65) {
		lettre = lettre + 32;

	}
	return lettre;
}

char my_toupper(char lettre) {                                    // mettre en majuscule un  caractère "lettre"


	if (122 >= lettre && lettre >= 97) {
		lettre = lettre - 32;

	}
	return lettre;
}

int my_strlen(const char *texte) {                  //donne la taille d'une chaîne de caractères "texte"

	int NbLettre;
	NbLettre = 0;

	do {
		if (*texte == '\0') {
			break;
		} else {
			NbLettre = NbLettre + 1;
			texte = texte + 1;

		}
	}    while (1);

	return NbLettre;

}

void my_strcpy(char *dest, const char *source) {       // copie une chaîne de caractère "source" vers une chaîne de chractère "destination"
	while (*source!='\0') {
		*dest=*source;
		dest=dest+1;
		source=source+1;
	}

	*dest=*source;
}

char *my_strncpy(char *dest, const char *source, int Taille) { // copie N caractère d'une chaîne "source" vers une chaîne de chractère "destination"
	int i;

	for (i = 0 ; i < Taille ; i++) {
		dest[i] = source[i];
	}

	dest[i]='\0';
	return &dest[0]; //Retourne l'adresse de dest[0] 
}

void my_strcat(char *dest, const char *source) {         // ajoute à une chaîne de caractère "destination" une chaîne de caractère "source"

	int Taille = my_strlen(dest), i;
	i=0;

	while (source[i] != '\0') {
		dest[Taille + i] = source[i];
		i=i+1;
	}
	dest[Taille + i] = '\0';
}

void my_strncat(char *dest, const char *source, int taille ) { // ajoute à une chaîne de caractère "destination" N caractère d'une chaîne "source"

	int Taille = my_strlen(dest), i = 0;

	for (i = 0 ; i < taille; i++) {
		dest[Taille + i] = source[i];

	}
	dest[Taille + i] = '\0';
}

char *my_strchr(char *source, char c) {        // donne la place de la première occurence d'un caractère "c" dans une chaîne de caractère "source"
	int Taille = my_strlen(source), i = 0;
	
	while (source[i] != c && source[i] != '\0') {
		i ++;
	}           

	if (source[i] == c) {
		return &source[i];
	} else {
		return NULL;
	}
}
