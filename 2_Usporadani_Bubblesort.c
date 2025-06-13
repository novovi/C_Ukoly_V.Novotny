//Bubble sort algorithm.
//Tedy máte nějaké pole, např.: 6, 5, 3, 1, 8, 7, 2, 4.
//Vypište pole před a po setřídění od nejmenšího po největší.

#include <stdio.h>

int main()
{
    int n = 8;
    int pole[] = {6, 5, 3, 1, 8, 7, 2, 4};
    
    printf("Původní pole čísel: ");
        for(int i=0; i<n; i++){
            printf("|%d|", pole[i]);    
        }

printf("\n");

    for(int i = 0; i<n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(pole[j] > pole[j+1]){
                int hodnoty = pole[j];
                pole[j] = pole[j+1];
                pole[j+1] = hodnoty;
            }
            
        }
        
    }
    
    printf("Vzestupně uspořádané pole čísel: ");
        for(int i=0; i<n; i++){
            printf("|%d|", pole[i]);    
        }
        
    return 0;
}
