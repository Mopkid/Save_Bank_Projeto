#include <stdio.h>

extern void registrarOperacao(const char *tipo, float valor); // Chama a funcao externa
void realizarDeposito(float *saldo) { // As alteracoes feitas vao modificar a variavel saldo
    float deposito; // Variavel para armazenar o valor depositado
    printf("Informe o valor a ser depositado: ");
    scanf("%f", &deposito); // Recolhe e guarda o valor na variavel deposito

    if (deposito > 0) { // Verifica se o valor depositado e positivo
        *saldo += deposito; // Adiciona o valor ao saldo 
        registrarOperacao("Deposito", deposito); // Registra o deposito ao historico
        printf("Deposito de R$ %.2f realizado com sucesso\n", deposito);
        printf("Saldo atual: %.2f\n", *saldo);
    } else {
        printf("O valor a ser depositado deve ser positivo!\n");
    }
} // Ass: Maria Clara
