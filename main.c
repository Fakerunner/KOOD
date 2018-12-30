#include <stdio.h>
#include <stdlib.h>
    int  i ,j ,e, f, g;

struct daneos
{
    int wartosc;
    int wyglad;
};

void wyswietl_tablice (struct daneos pole[i][j])
{
    int a=10,b=10,i,j;
    for (i=0;i<a;i++)
    {
        printf("\n");
        for (j=0;j<b;j++)
        {
            if (i>5&&i<10)
            {
                pole[i][j].wyglad='X';
                pole[i][j].wartosc=10;
            }
            else
            {
                pole[i][j].wyglad='X';
                pole[i][j].wartosc=5;
            }
            printf ("%c ", pole[i][j].wyglad);
        }
    }
    printf ("\n");
}

void zmien_tablice (struct daneos pole[i][j])
{
    int a=10,b=10,i=0,j=0;
    scanf ("%d",&e);
    scanf ("%d",&f);
    printf ("SSSSSSSS");
    for (i=0;i<a;i++)
    {
        printf("\n");
        for (j=0;j<b;j++)
        {
            if (i>5&&i<10)
            {
                pole[i][j].wyglad='G';
                pole[i][j].wartosc=10;
            }
            else
            {
                pole[i][j].wyglad='X';
                pole[i][j].wartosc=5;
            }
           // if (i==e&&j==f)
           // {
           //     printf ("M ");
           // }
           // else
           // {
            printf ("%c ", pole[i][j].wyglad);
           // }
        }
    }
}

int main(void)
{
    struct daneos pole[i][j];
    wyswietl_tablice(pole);
    wyswietl_tablice(pole);
    printf ("Co dalej?");
    scanf ("%d",&e);
    switch (e)
    {
        case 1:
            system("cls");
            wyswietl_tablice(pole);
            //zmien_tablice(pole);
        break;
        case 2:
            system("cls");
            printf ("XDDD");
        default:
        break;
    }


    return 0;
}
