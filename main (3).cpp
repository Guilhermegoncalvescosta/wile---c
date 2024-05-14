#include <stdio.h>

int main() {
    int opcao;
    float saldo = 0;
    float saque, deposito;
    
    do {
        printf("Menu de opções\n");
        printf("1- Consulta\n");
        printf("2- Saque\n");
        printf("3- Depósito\n");
        printf("4- Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1:
                printf("Seu saldo atual é: R$ %.2f\n", saldo);
                break;
            case 2:
                printf("Digite o valor do saque: R$ ");
                scanf("%f", &saque);
                if (saldo >= saque) {
                    saldo -= saque;
                    printf("Saque realizado com sucesso!\n");
                } else {
                    printf("Saldo insuficiente para realizar o saque\n");
                }
                break;
            case 3:
                printf("Digite o valor do depósito: R$ ");
                scanf("%f", &deposito);
                saldo += deposito;
                printf("Depósito realizado com sucesso!\n");
                break;
            case 4:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida. Por favor, escolha uma opção válida.\n");
        }
    } while(opcao != 4);
    
    return 0;
}
