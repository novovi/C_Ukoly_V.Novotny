//Vytvořte program, který bude po zadání vstupu generovat výstup v podobě Caesarovy šifry.

#include <stdio.h>

int main()
{
    
    char zprava[100];
    printf("Zadejte text pro Caesarovské zašifrování: ");
        scanf("%s", zprava);
    for(int i=0; zprava[i] != '\0'; i++){
        zprava[i] = zprava[i]+3;
    }
    
    printf("Zašifrovaná zpráva: %s", zprava);
    
    return 0;
}
