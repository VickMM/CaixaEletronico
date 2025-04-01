#include<stdio.h>

main() {
 
 short int opcao;
 float saldo = 0;
 float deposito;
 float saque;
 
 do {
  printf("1- Modulo deposito \n");
  printf("2- Modulo sacar \n");
  printf("3- Modulo saldo \n");
  printf("4- Sair \n");
 
 
  printf("Escolha uma opcao \n");
  scanf("%i", &opcao);
 
  switch(opcao) {
  
   case 1: printf("Modulo deposito \n");
     printf("Digite o valor a ser depositado \n");
     scanf("%f", &deposito);
     saldo = saldo + deposito;
     printf("Saldo atual: %.2f \n", saldo);    
     break;
  
   case 2: printf("Modulo sacar \n");
     printf("Digite o valor a ser sacado \n");
     scanf("%f", &saque);
     
      if(saque>saldo) {
       printf("Saldo insuficiente \n");
      }
      else {
       saldo = saldo - saque;
       printf("Voce sacou: %.2f \n", saque);
       printf("Saldo atual: %.2f \n", saldo);
      }    
     break;
  
   case 3: printf("Modulo saldo \n");
     printf("%.2f \n", saldo);
     break;
  
   case 4: printf("Fim do programa \n");
     break;
  
   default: printf("Opcao incorreta \n");
     break;
  
  }
 } while (opcao!=4);
}

