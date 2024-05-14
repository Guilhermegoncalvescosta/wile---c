
#include <stdio.h>

int main() {
    int numAlunos;
    int contador = 1;
    float peso, somaPesos = 0, mediaPeso;

    printf("Quantos alunos você tem em sua academia? ");
    scanf("%d", &numAlunos);

    while (contador <= numAlunos) {
        printf("Digite o peso do aluno %d: ", contador);
        scanf("%f", &peso);

        somaPesos += peso;
        contador++;
    }

    if (numAlunos > 0) {
        mediaPeso = somaPesos / numAlunos;
        printf("A média de peso dos alunos é: %.2f\n", mediaPeso);
    } else {
        printf("Nenhum aluno na academia.\n");
    }

    return 0;
}



