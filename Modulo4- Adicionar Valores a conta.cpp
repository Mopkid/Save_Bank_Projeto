#include <stdio.h>
  int main(){
  float saldo = 1000;
  float deposito;

   printf("Saldo atual: R$ %.2f\n", saldo); //Vai mostrar o saldo atual
   printf("Informe o valor a ser Depositado: ");
   scanf("%f", &deposito);

   //verificando se o valor e positivo para adicionar a conta 
   if (deposito > 0){
   saldo += deposito; //adiciona o valor do deposito ao saldo
    printf ("Deposito de R$ %.2f realizado com sucesso\n", deposito);
    printf("Novo saldo: R$ %.2f\n", saldo); //mostrando o novo valor do saldo
} else{ 
    printf("O valor a ser depositado deve ser positivo!\n");
}
return 0; //Ass: Maria Clara
}
