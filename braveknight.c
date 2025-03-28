#include <stdio.h>
#define TAMANHO 5

int maiorNoVetor(int vetor[], int tamanho){
   int maiordetodos;
   maiordetodos = vetor[0];
   for(int i = 1; i<tamanho; i++){
    if(vetor[i]>maiordetodos){
        maiordetodos = vetor[i];
    }
   }
   return maiordetodos;
}
int menorNoVetor(int vetor[], int tamanho){
    int menordetodos;
    menordetodos = vetor[0];
    for(int i = 1; i<tamanho; i++){
     if(vetor[i]<menordetodos){
         menordetodos = vetor[i];
     }
    }
    return menordetodos;
 }


int main() {

    int vetor[TAMANHO];
    printf("preencha o vetor de %d espacos a seguir: \n", TAMANHO);
    
    for(int i=0;i<TAMANHO;i++){
        scanf("%d", &vetor[i]);
    }
    int resultado1 = maiorNoVetor(vetor, TAMANHO);
    int resultado2 = menorNoVetor(vetor, TAMANHO);
    printf("o maior número é: %d\n", resultado1);
    printf("o menor número é: %d\n", resultado2);

    return 0;
}