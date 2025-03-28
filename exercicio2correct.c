#include <stdio.h>
int main(){
    double salario;
    printf("Digite seu salário atual: ");
    scanf("%lf", &salario);
    if(salario <= 2252.20){
        printf("Seu desconto será de 0%%\n");
    } else if(salario <=  2826.65){
        printf("Seu desconto será de 7,5%%\n");
    } else if(salario <=  3751.05){
        printf("Seu desconto será de 15%%\n");       
    }else if(salario <=   4664.68){
        printf("Seu desconto será de 22,5%%\n");       
    } else if(salario >= 4664.69){
        printf("Seu desconto será de 27,5%%\n"); 
    }
    return 0;
}