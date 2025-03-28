#include <stdio.h>

int ehPrimo(int num){
    int qtdDivisores = 0;
    for(int divisor = 1; divisor <= num; divisor +=1){
        if(num % divisor == 0){
            qtdDivisores++;
        }
    }
    return qtdDivisores == 2;
}
int main(){
    int numero;
    printf("digite um numero positivo inteiro: ");
    scanf("%d", &numero);
    do{
        if(ehPrimo(numero)){
            printf("o número é primo!\n");
        } else{
            printf("o número não é primo!\n");
        }
        printf("Digite um número inteiro(<=0 para encerrar)\n");
        scanf("%d", &numero);
    } while(numero>0);
    return 0;
}