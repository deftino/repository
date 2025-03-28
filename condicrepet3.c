#include <stdio.h>
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF); // Consome todos os caracteres até encontrar \n ou EOF
}
int main(){
   char sexo;
   int idade, idadeMaisPesada = 0, totalHomensMenos30 = 0, totalMulheres = 0, mulheresMenos50kg = 0;
   double peso, mediaPesoMenos30, somaPesoMenos30 = 0, pesoPesado=0, contaMulheres; 
   while(1){
    printf("Digite o seu sexo (M/F) ou 'S' para mostrar os resultados:\n");
    scanf(" %c", &sexo);
    if(sexo == 'S' || sexo == 's'){
        break;
    }
    if (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f') {
        printf("Sexo inválido, digite um sexo válido (M/F) para continuar o programa!\n");
        limparBuffer();
        continue;
    }
    if(sexo == 'F'|| sexo=='f'){
        totalMulheres++;
    }
    printf("Digite a sua idade:\n");
    scanf("%d", &idade);

    printf("Digite o seu peso:\n");
    scanf("%lf", &peso);

    if(peso > pesoPesado){
        pesoPesado = peso;
        idadeMaisPesada = idade;
    }
    if((sexo == 'M' || sexo =='m') && idade<30){
        somaPesoMenos30 += peso;
        totalHomensMenos30++;
    }
    if((sexo == 'F' || sexo =='f') && peso<50){
        mulheresMenos50kg++;
   }
   } 
   if (totalHomensMenos30 > 0) {
    mediaPesoMenos30 = somaPesoMenos30 / totalHomensMenos30;
} else {
    mediaPesoMenos30 = 0; 
}

if (totalMulheres > 0) {
    contaMulheres = (double)mulheresMenos50kg / totalMulheres * 100;
} else {
    contaMulheres = 0; 
}
   printf("Os resultados são:\n");
   printf("A idade da pessoa mais pesada: %d\n", idadeMaisPesada);
   printf("A média do peso dos homens com menos de 30kg: %.2f\n", mediaPesoMenos30);
   printf("O percentual de mulheres com menos de 50kg: %.2f%%\n", contaMulheres);
   return 0;
}