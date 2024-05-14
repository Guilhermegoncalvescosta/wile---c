#include <stdio.h>

int main() {
    int numero;
    
    do {
        printf("Digite um número entre 1 e 10: ");
        scanf("%d", &numero);
        
        if (numero < 1 || numero > 10) {
            printf("Número inválido. Tente novamente.\n");
        }
    } while (numero < 1 || numero > 10);
    
    int i = 1;
    while (i <= 10) {
        printf("%d X %d = %d\n", numero, i, numero * i);
        i++;
    }
    
    return 0;
}
