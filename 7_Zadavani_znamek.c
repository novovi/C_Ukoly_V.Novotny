//7. Program se postupně zeptá kolik chcete zadat 
//známek (1 až 5). Následně pro ně vytvoříte místo v 
//paměti a uživatel je postupně zaplní. Na konci 
//vypíšete průměr těchto známek

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int pocet;
    float *znamky;
    float soucet = 0;

    
    printf("Kolik bude známek? (1-5)\n");
        scanf("%d", &pocet);
    if(pocet<1 || pocet>5){
        printf("Zadali jste nesprávný počet známek.");
    return 1;
    }
    
    znamky = (float *)malloc(pocet *sizeof(float));
    if(znamky == NULL){
        printf("Nedostatek paměti.");
    }
    
    for(int i=0; i<pocet; i++){
        printf("Zadejte %d známku: ", i+1);
            scanf("%f", &znamky[i]);
    soucet += znamky[i];
    }

    float prumer = soucet / pocet;
    printf("Průměr známek je: %.2f", prumer);
    
    return 0;
}