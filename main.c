#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int  i ,j ,e, f, g, a, b, d, c;
void stworz_tablice (void);
void drukuj_tablice (void);
void zmien_tablice (void);
void co_teraz (void);
struct daneos
{
    int wartosc;
    int wyglad;
};
struct daneos pole[100][100];

int main()
{
    printf ("Podaj szerokosc");
    scanf ("%d", &b);
    printf ("Podaj dlugosc");
    scanf ("%d", &a);
    stworz_tablice();
    drukuj_tablice();
    for (c=0; ;c++)
    {
        co_teraz();
        zmien_tablice();
        drukuj_tablice();
    }
    return 0;
}

void stworz_tablice(void)
{
    for (i=0;i<a;i++)
    {
        for (j=0;j<b;j++)
        {
            pole[i][j].wyglad='X';
            pole[i][j].wartosc=5;
        }
    }
}

void drukuj_tablice(void)
{
    for (i=0;i<a;i++)
    {
        printf("\n");
        for (j=0;j<b;j++)
        {
            printf ("%c ", pole[i][j].wyglad);
        }
    }
    printf ("\n");
}

void zmien_tablice (void)
{
    system("cls");
    pole[4][8].wyglad='G';
}

void co_teraz(void)
{
    printf ("Podaj parametry oddzielone znakiem enter \n Szerokosc:");
    scanf ("%d", &i);
    printf ("Dlugosc:");
    scanf ("%d", &j);
    printf ("Co chcesz zrobic?\n1 - odkryc\n2 - oznaczyc jako bombe\n3 - powrot");
    scanf ("%d", d);
    switch (d)
    {
        case 1:
            if (pole[i][j].wartosc==5)
                printf ("Przegrales");
        break;
        case 2:
            pole[i][j].wyglad='B';
            for (i=0;i<a;i++)
            {
                printf("\n");
                for (j=0;j<b;j++)
                {
                    printf ("%c ", pole[i][j].wyglad);
                }
            }
    printf ("\n");
        break;
        case 3:
        break;
    }
}
