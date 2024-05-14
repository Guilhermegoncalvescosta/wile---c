#include <stdio.h>

int main() {
    char *meses[] = {"janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};

    for (int i = 0; i < 12; i++) {
        printf("%d - %s\n", i + 1, meses[i]);
    }

    return 0;
}

