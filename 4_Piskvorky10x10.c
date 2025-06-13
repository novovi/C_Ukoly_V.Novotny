//Program vykreslí plochu a nechá si střídavě zadávat od hráčů souřadnice. 
//Kontrolu výhry nyní zanedbejte. Hrací pole bude 10×10.

#include <stdio.h>
#define VELIKOST 10

char hraci_pole[VELIKOST][VELIKOST];
char hrac = 'X';

void inicializace_pole() {
    for (int i = 0; i < VELIKOST; i++)
        for (int j = 0; j < VELIKOST; j++)
            hraci_pole[i][j] = ' ';
}

void vypis_pole() {
    printf("\n");
    for (int i = 0; i < VELIKOST; i++) {
        for (int j = 0; j < VELIKOST; j++) {
            printf(" %c ", hraci_pole[i][j]);
            if (j < VELIKOST - 1) printf("|");
        }
        printf("\n");

        if (i < VELIKOST - 1) {
            for (int j = 0; j < VELIKOST * 4 - 1; j++)
                printf("-");
            printf("\n");
        }
    }
}

int je_platny_tah(int radek, int sloupec) {
    return (radek >= 1 && radek <= VELIKOST && sloupec >= 1 && sloupec <= VELIKOST)
           && (hraci_pole[radek-1][sloupec-1] == ' ');
}

int main() {
    inicializace_pole();
    int radek, sloupec;
    printf("Piškvorky 10x10 – zadejte řádek a sloupec (1-10), styl:'X Y'\n");

    while (1) {
        vypis_pole();
        printf("Hráč %c: ", hrac);
        
        if (scanf("%d %d", &radek, &sloupec) != 2) {
            printf("Neplatný formát! Použijte mezeru, např. '2 2'.\n");
            while (getchar() != '\n'); // včištění bufferu
            continue;
        }
        if (!je_platny_tah(radek, sloupec)) {
            printf("Neplatný tah. Zadejte čísla 1-10n");
            continue;
        }
        hraci_pole[radek-1][sloupec-1] = hrac;
        
    hrac = (hrac == 'X') ? 'O' : 'X';
    }
    
    return 0;
}

