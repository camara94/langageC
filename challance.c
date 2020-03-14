#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void afficheFigure1(int count);
char* afficheCarre(int cote);
char* afficherCercle(int rayon);
char* triangle(int count);

int main(void)
{

	char carre1[10000] = {};
	char cercle1[10000] = {};
	char carre2[10000] = {};
	char cercle2[10000] = {};
	char cercle3[10000] = {};
	char t[10000] = {};
	char c[10000] = {};
	int i=0;


	strcpy(carre1, afficheCarre(10));
	strcpy(carre2, afficheCarre(5));
	strcpy(cercle2, afficherCercle(8));
	strcpy(cercle1, afficherCercle(4));
	strcpy(cercle3, afficherCercle(5));

	strcpy(t, triangle(10));
	char *figures[10]={carre1, cercle1, carre2, cercle2, cercle3, c, t};

	for(i=0; i < 7; i++) {
        printf("%s\n", figures[i]);
	}
	return 0;
}


char* afficherCercle(int rayon)
{
	int y = 0;
	int x = 0;
	int k = 0;
	char figure[1000] = {};

	for (y = -rayon; y < rayon+1; y++)  {
		char blanc[100]={};
        char etoile[100]={};
        char retour[100]={};

        strcat(figure, "\n");
        for (x = -rayon; x < rayon+1 ; x++) {
            if(abs((x * x) + (y * y)-(rayon * rayon)) <= (rayon/2)) {
                strcat(figure, "-");
            }
            else  {
                strcat(figure, " ");
             }
        }
    }

    return figure;

}


char* afficheCarre(int count) {
	int i = 0;
	int j = 0;
	int k = 0;
	char figure[1000] = {};

    for (i=0; i < count; i++)
    {
        char blanc[1000]={};
        char etoile[1000]={};
        for (k=0 ;k < count; ++k)
        {
            if(i==0 || i==(count-1) || k==0)
             strcat(etoile, "-");
             else if(k==(count-1)) {
                    int o=0;
                for(o=0; o < count-2; o++) {
                    strcat(etoile, " ");
                }
                strcat(etoile, "-");
             }
        }

        strcat(figure,etoile);
        strcat(figure,"\n");
	}

	return figure;
}




char* triangle(int count) {

        char figure[1000] = {};
        int i = 0;
        int j = 0;
        int k = 0;



        for (i=0; i < count; i++)
        {
            char blanc[100]={};
            char etoile[100]={};
            char retour[3]="\n";

            for (j=0;j < (count-i); ++j)
            {
                strcat(blanc, " ");
            }

            for (k=0 ;k < (2*i+1); ++k)
            {
                strcat(etoile, "*");
            }

            //printf("%s%s",blanc,etoile);
            //printf("\n");
            strcat(figure, blanc);
            strcat(figure, etoile);
            strcat(figure, retour);
        }
    return figure;
}

