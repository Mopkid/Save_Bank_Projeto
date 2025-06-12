#include <stdio.h>

extern void registrarOperacao(const char *tipo, float valor);

void realizarDeposito(float *saldo) {
    float deposito;
    printf("Informe o valor a ser depositado: ");
    scanf("%f", &deposito);

    if (deposito > 0) {
        *saldo += deposito;
        registrarOperacao("Depósito", deposito);
        printf("Depósito de R$ %.2f realizado com sucesso\n", deposito);
    } else {
        printf("O valor a ser depositado deve ser positivo!\n");
    }
} // Ass: Maria Clara
