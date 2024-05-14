
#include <stdio.h>

int main() {
    int senhaCorreta = 1234;
    int senhaDigitada;

    do {
        printf("Digite a senha de quatro dígitos: ");
        scanf("%d", &senhaDigitada);

        if (senhaDigitada == senhaCorreta) {
            printf("Senha Correta\n");
            break;  // A senha está correta, então saímos do loop
        } else {
            printf("Senha Incorreta\n");
        }
    } while (1); // Loop infinito até que a senha correta seja digitada

    return 0;
}
