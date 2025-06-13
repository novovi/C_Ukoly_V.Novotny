//Napište funkci která jako parametr přijme pole čísel a 
//jeho délku. V tomto poli pak nalezne tři největší čísla, 
//která sečte a výsledek vrátí (nápověda – qsort(), 
//případně využijte Váš BubbleSort).

#include <stdio.h>

    int delka = 8;
    int hodnoty; //pro bublesort
    
    int tri_nejvetsi(int pole[], int delka){
       for(int i = 0; i<delka-1; i++){
            for(int j = 0; j < delka-i-1; j++){
                 if(pole[j] < pole[j+1]){           
                        int hodnoty = pole[j];
                        pole[j] = pole[j+1];
                        pole[j+1] = hodnoty; 
                    }
            }
        }
    return pole[0]+pole[1]+pole[2];
    } 




    int main(){
        
    int pole[] = {6, 5, 3, 1, 8, 7, 2, 4};

    
    printf("Původní pole čísel: ");
        for(int i=0; i<delka; i++){
            printf("|%d|", pole[i]);
        }

    printf("\n");

    int vysledek = tri_nejvetsi(pole, 8);
    
   printf("Součet tří největších čísel pole je: %d", vysledek);


    return 0;
}




