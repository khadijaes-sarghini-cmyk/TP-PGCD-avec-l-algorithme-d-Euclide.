#include <stdio.h>

int main() {
    int a, b, temp;
    
    printf("Entrez deux entiers : ");
    scanf("%d%d", &a, &b);

    int x = a, y = b;

    printf("Étapes de l'algorithme d'Euclide :\n");
    while (b != 0) {
        printf("%d = %d * (%d) + %d\n", a, a / b, b, a % b);
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("PGCD = %d\n", a);

    if (a == 1) {
        printf("Les deux nombres sont premiers entre eux.\n");
    }

    return 0;
}
