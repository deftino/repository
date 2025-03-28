#include <stdio.h>
#define TAMANHO 100

int somatorioPares(int vetor[], int tamanho){
    int soma = 0;
    for(int i = 0; i < tamanho; i++){
    if(vetor[i]%2==0){
        soma += vetor[i];
     }
   }
   return soma;
}
long long produtoImpares(int vetor[], int tamanho){
  long long produto = 1;
  for(int i = 0; i < tamanho; i++){
    if(vetor[i]%2!=0){
      produto*=vetor[i];
    }
  }
  return produto;
}
int menorValorVetor(int vetor[], int tamanho){
  int menorValor = vetor[0];
  for(int i = 0; i<tamanho; i++){
   if(menorValor>vetor[i]){
    menorValor = vetor[i];
   }
  }
  return menorValor;
}
int main(){
  int vetor[TAMANHO];

  printf("Digite 10 números inteiros:\n");
  for(int i = 0; i< TAMANHO; i++){
    scanf("%d", &vetor[i]);
  }
  printf("A soma dos pares é:\n %d\n", somatorioPares(vetor, TAMANHO));
  printf("O produto dos ímpares é:\n %lld\n", produtoImpares(vetor, TAMANHO));
  printf("O menor valor entre os vetores é:\n %d\n", menorValorVetor(vetor, TAMANHO));
  return 0;
}
