#include <stdio.h>
#define TAM_MINIMO 3
#define TAM_MAXIMO 50


void inserOrdenada(int vetor[], int tamanho){
    for(int i = 0;i<tamanho;i++){
        int num;
        printf("Insira o algarismo na posicao [%d]:\n", i+1);
        scanf("%d", &num);
        int j;
        for(j = i;j>0 && vetor[j-1]>num; j--){
            vetor[j]=vetor[j-1];
        }
        vetor[j]=num;
    }
}

int buscaBinaria(int vetor[], int tamanho, int x) {
    int inicio = 0, fim = tamanho - 1, meio;
    while (inicio <= fim) {
      meio = (inicio + fim) / 2;
      if (vetor[meio] > x) {
        fim = meio - 1;
      } else if (vetor[meio] < x) {
        inicio = meio + 1;
      } else {
        return meio;
      }
    }
    return -1;
  }

  int removerElemento(int vetor[], int tamanho, int x) {
    int index = buscaBinaria(vetor, tamanho, x);  
    if (index == -1) {
        printf("Elemento '%d' não encontrado!\n", x);
        return tamanho;  
    } 
    for (int i = index; i < tamanho - 1; i++) {
        vetor[i] = vetor[i + 1];
    }
    printf("Elemento '%d' removido com sucesso!\n", x);
    return tamanho - 1;  
}

int inserirElemento(int vetor[], int tamanho, int x) {
    if (tamanho >= TAM_MAXIMO) {
        printf("Capacidade máxima do vetor atingida!\n");
        return tamanho;  
    }
    int i;
    for (i = tamanho - 1; i >= 0 && vetor[i] > x; i--) {
        vetor[i + 1] = vetor[i];  
    }

    vetor[i + 1] = x; 
    printf("Elemento '%d' inserido com sucesso!\n", x);
    return tamanho + 1;  
}

int main(){
    int tamanho;
    while(1){
        printf("Digite o tamanho do vetor de 3 a 50:\n");
        scanf("%d",&tamanho);
        if(tamanho>TAM_MAXIMO||tamanho<TAM_MINIMO){
            printf("Valor inválido! Tente novamente:\n");
        } else{
            break;
        }
    }
    int vetor[tamanho];
    inserOrdenada(vetor, tamanho);
    while(1){
        int opcao;
        printf("Menu:\nPressione '1' para mostrar o vetor ordenado completo\nPressione '2' para buscar um número e sua posição\nPressione '3' para remover um número\nPressione '4' para inserir um número\nPressione '5' para finalizar o programa\n");
        scanf("%d", &opcao);
        if(opcao==1){
         for(int i = 0;i<tamanho;i++){
            printf("vetor[%d] = %d ", i+1, vetor[i]);
            if(i<tamanho-1){
                printf("- ");
            } else if(i==tamanho-1){
                printf("\n");
            }
         }
         
        } else if(opcao==2){
         int num;
         printf("Digite o número procurado:\n");
         scanf("%d", &num);
         int resposta = buscaBinaria(vetor,tamanho,num);
         if(resposta!=-1){
            printf("O número %d esta na posição Vetor[%d]!\n", num, resposta+1);
         } else{
            printf("O número %d não está presente no vetor!\n", num);
         }
        } else if(opcao==3){
            printf("Digite o número a ser removido: \n");
            int numRemover;
            scanf("%d", &numRemover);
            tamanho = removerElemento(vetor, tamanho, numRemover);
        } else if(opcao==4){
            printf("Digite o número a ser inserido: \n");
            int numInsertion;
            scanf("%d", &numInsertion);
            tamanho = inserirElemento(vetor, tamanho, numInsertion);
        } else if(opcao==5){
            printf("Fechando o programa...\n");
            break;
        } else{
            printf("Comando inválido! Tente novamente:\n");
        }
    }
    return 0;
}