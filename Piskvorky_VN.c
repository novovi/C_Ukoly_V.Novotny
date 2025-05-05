#include <stdio.h>
#define VELIKOST 3      

char hraci_pole[VELIKOST][VELIKOST];
char hrac = 'X';

void prazdne_pole() {       //nakreslí prázdná políčka
    for (int i = 0; i < VELIKOST; i++)
        for (int j = 0; j < VELIKOST; j++)
            hraci_pole[i][j] = ' ';
}

void vypis_pole() {     //nakreslí strukturu pole
    printf("\n");
    for (int i = 0; i < VELIKOST; i++) {
        printf(" %c | %c | %c \n", hraci_pole[i][0], hraci_pole[i][1], hraci_pole[i][2]);
        if (i < VELIKOST - 1){
            printf("-----------\n");
        } 
    }
}

int je_platny_tah(int radek, int sloupec) {             // Napsal hráč správné souřadnice na volné políčko?
    return (radek >= 1 && radek <= VELIKOST && sloupec >= 1 && sloupec <= VELIKOST) 
           && (hraci_pole[radek-1][sloupec-1] == ' ');
}

int je_vitez() {        //kontroluje, jestli někdo vyhrál
    for (int i = 0; i < VELIKOST; i++) {
    //Jsou políčka jednoho hráče v horizontálním pořadí?
        if (hraci_pole[i][0] == hrac && hraci_pole[i][1] == hrac && hraci_pole[i][2] == hrac) return 1;
    //Jsou políčka jednoho hráče ve vertikálním pořadí?
        if (hraci_pole[0][i] == hrac && hraci_pole[1][i] == hrac && hraci_pole[2][i] == hrac) return 1;
    }
    //Jsou políčka jednoho hráče v diagonálním pořadí?
    if (hraci_pole[0][0] == hrac && hraci_pole[1][1] == hrac && hraci_pole[2][2] == hrac) return 1;
    if (hraci_pole[0][2] == hrac && hraci_pole[1][1] == hrac && hraci_pole[2][0] == hrac) return 1;
    return 0;
}

int main() {
    prazdne_pole();
    int radek, sloupec;
    printf("Piškvorky 3x3 – zadejte i-tý řádek a j-tý sloupec [i j]:\n");

    while (1) {
        vypis_pole();
        printf("Hráč %c: ", hrac);
        scanf("%d %d", &radek, &sloupec);
        
        if (!je_platny_tah(radek, sloupec)) {
            printf("Neplatný tah.\n");
            continue;
        }
        
        hraci_pole[radek-1][sloupec-1] = hrac;
        
        if (je_vitez()) {
            vypis_pole();
            printf("Hráč %c vyhrál!\n", hrac);
            break;
        }
        //střídání hráčů
        if (hrac == 'X') {
            hrac = 'O';
        } else {
        hrac = 'X';
        }
    }
    return 0;
}