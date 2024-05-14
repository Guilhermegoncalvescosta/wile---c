
#include <stdio.h>

int calcularFatorial(int n) {
    int fatorial = 1;
    
    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }
    
    return fatorial;
}

int main() {
    int numero;
    
    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &numero);
    
    if (numero < 0) {
        printf("O fatorial de números negativos não é definido.\n");
    } else {
        int resultado = calcularFatorial(numero);
        printf("O fatorial de %d é: %d\n", numero, resultado);
    }
    
    return 0;
}
