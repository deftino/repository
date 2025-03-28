#include <stdio.h>
int main(){
    //ct 1 = 10%, 2 = 15% e 3 = 8%; quant 2 = 2%, quant 2 a 10 = 5%, quant <10 = 10% 
    double preco;
    int cat, quant;
    while (1) {  
        printf("Digite a categoria do produto (1, 2 ou 3):\n");
        scanf("%d", &cat);
        if (cat == 1 || cat == 2 || cat == 3) {
            break;  
        } else {
            printf("Valor inválido! Tente novamente.\n");
        }
    }
    while(1){
        printf("Digite o preço do produto desejado:\n");
        scanf("%lf", &preco);
        if(preco<=0){
            printf("Valor inválido! Tente novamente.\n");
        } else{
            break;
        }
    }
    while (1){
        printf("Digite a quantidade desejada do produto:\n");
        scanf("%d", &quant);
        if(quant<=0){
            printf("Valor inválido! Tente novamente.\n");
        } else{
            break;
        }
    }
    double precoBruto = preco * quant;
    int desconto = 0;
    if(cat == 1){
      desconto += 10;
    } else if(cat ==2){
        desconto += 15;
    } else {
        desconto += 8;
    }
    if(quant == 2 ){
        desconto +=2;
      } else if(quant<=10){
        desconto +=5;
      } else if(quant>10) {
        desconto +=10;
      }
      double precoTotal = precoBruto * ((double)desconto/100);
      double precoSalvo = precoBruto - precoTotal;
    printf("O preço original seria %.2f, com os descontos aplicados, o custo vai para %.2f com um total de %.2f reais a menos no preço final!\n", precoBruto, precoTotal, precoSalvo);
    return 0;
}