#include <stdio.h>
int main(){
    int valorInicial, Incremento, quantElementos;
    printf("Digite um número inteiro para ser o valor inicial:\n");
    scanf("%d", &valorInicial);
    printf("Agora, digite um número inteiro para ser o incremento:\n");
    scanf("%d", &Incremento);
    printf("Digite a quantidade de elementos:\n");
    scanf("%d", &quantElementos);
    if(quantElementos <=0){
        printf("A progressão precisa de um número maior que 0 para acontecer");
        return 1;
    }
    printf("A sua progressão aritmética é:\n");
    for(int i = 0; i<quantElementos; i++){
        printf(" %d", valorInicial + i*Incremento);
        if(i<quantElementos-1){
            printf(" -");
        }
    }
    printf("\n");
    return 0;
}