#include <stdio.h>

int main() {
    int contagem[10] = {0};  
    int numero;
    
    printf("Digite 1000 números:\n");
    for (int i = 0; i < 1000; i++) {
        scanf("%d", &numero);
        int ultimoDigito = numero % 10;  
        contagem[ultimoDigito]++;        
    }
    printf("Tabela de contagem:\n");
    for (int i = 0; i < 10; i++) {
        printf("Números terminados em %d: %d\n", i, contagem[i]);
    }
    return 0;
}