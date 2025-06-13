//Program se opět zeptá uživatele na další číslo, ale tentokrát v rozmezí od 1 do 10 nebo 20 do 30. 
//Pokud uživatel zadá špatné číslo, program mu to oznámí a naopak pokud správné, tak mu poděkuje.


#include <stdio.h>

int main()
{
    int cislo;
    printf("Zadejte číslo na škále 1-10, nebo 20-30: ");
        scanf("%d", &cislo);
    if(cislo >= 1 && cislo<=10 || cislo >= 20 && cislo<=30){
        printf("Děkuji za číslo!");
    }
    else{
        printf("Zadali jste nesprávné číslo!");
    }
    
    return 0;
}