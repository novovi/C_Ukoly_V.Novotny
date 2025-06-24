//6. GuessMyNumber game. Vy si myslíte číslo a počítač 
//ho hádá. Jediné co vy sdělujete zpět je jestli je číslo 
//větší, menší nebo číslo počítač uhádl.

#include <stdio.h>

int min = 1;
int max = 100;
int tip;
char odpoved;

int main()
{
    printf("Vymyslete si celé číslo, které bude v rozmezí 1 - %d.\nProgram vypíše číslo v této mezi a vy mu napíšete, \nje-li jeho hádané číslo menší [<], větší [>], než vaše, \nnebo jestli je to jím hledané číslo [=].\n\n", max);
    
    while(1){
        tip = (min+max)/2;
        printf("Je vaše číslo %d ?\n", tip);
        printf("Odpověď: ");
            scanf(" %c", &odpoved);
        
        if(odpoved == '>'){
            min = tip+1;
        }
        else if(odpoved == '<'){
            max = tip-1;
        }
        else if(odpoved == '='){
            printf("Ano. Vaše číslo tedy je %d.", tip);
            break;
        }
        else{
            printf("Váš vstup není relevantní.");
        }
        if(max<min){
            printf("Chyba. Odpověděl jste protikladně.\n");
        }
    }
    return 0;
}