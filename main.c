#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int  i ,j ,e, f, g, a, b, d, c, k, L, B;
void stworz_tablice (void);
void drukuj_tablice (void);
void co_teraz (void);
void drukuj_wartosci(void);
void sprawdz_numerek(void);
void rozlosuj_bomby (void);
struct daneos
{
    int wartosc;
    int wyglad;
    char znak;
};
struct daneos pole[100][100];

int main()
{
    printf ("Podaj szerokosc");
    scanf ("%d", &b);
    printf ("Podaj dlugosc");
    scanf ("%d", &a);
    printf ("Ile bomb ma byæ na mapie?");
    scanf ("%d", &B);
    void rozlosuj_bomby (void);
    stworz_tablice();
    drukuj_tablice();
    for (c=0; ;c++)
    {
        co_teraz();
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
            pole[i][j].znak="B";
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

void drukuj_wartosci(void)
{
    for (i=0;i<a;i++)
    {
        printf ("\n");
        for (j=0;j<b;j++)
        {
            printf ("%c ", pole[i][j].znak);
        }
    }
    printf ("\n");
}

void sprawdz_numerek(void)
{
    L=0;
    for (i=i-2; i<i+1; i++)
    {
       for (j=j-2; j<j+1; j++)
       {
            if (pole[i-1][j-1].wartosc==5)
                L++;
       }
    }
    pole[i-1][j-1].wyglad="L";
}

void co_teraz(void)
{
    printf ("Podaj parametry oddzielone znakiem enter \n Szerokosc:");
    scanf ("%d", &i);
    printf ("Dlugosc:");
    scanf ("%d", &j);
    printf ("Co chcesz zrobic?\n1 - odkryc\n2 - oznaczyc jako bombe\n3 - powrot");
    scanf ("%d", &d);
    switch (d)
    {
        case 1:
            if (pole[i-1][j-1].wartosc==5)
                system("cls");
                drukuj_wartosci();
                printf ("Przegrales");
                exit (0);
        break;
        case 2:
            pole[i-1][j-1].wyglad='B';
            system("cls");
            drukuj_tablice();
        break;
        case 3:
        break;
    }
}
