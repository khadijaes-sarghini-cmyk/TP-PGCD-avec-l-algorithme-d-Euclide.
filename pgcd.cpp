#include <stdio.h>

// Fonction qui calcule le PGCD avec l'algorithme d'Euclide 
int pgcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;  // Retourne la valeur absolue si elle est négative 
}

int main() {
    int num1, num2;
    
    printf("veuillez saisir un nombre num1: ");
    scanf("%d", &num1);
    
    printf("veuillez saisir un nombre num2: ");
    scanf("%d", &num2);
    
    if (num1 < 0) num1 = -num1; // prendre la valeur absolue 
    if (num2 < 0) num2 = -num2;
    
    int resultat = pgcd(num1, num2);
    
    printf("PGCD de %d et %d est : %d\n", num1, num2, resultat);
    
    return 0;
}
