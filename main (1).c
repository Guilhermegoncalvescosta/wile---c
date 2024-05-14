#include <stdio.h>

int main() {
    int idade, cont = 0;

    for (int i = 1; i <= 5; i++) {
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);

        if (idade > 18) {
            cont++;
        }
    }

    printf("O numero de pessoas maiores de 18 anos e: %d\n", cont);

    return 0;
}
