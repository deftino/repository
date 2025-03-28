#include <stdio.h>

int main() {
    //ex 1.
    double conta, multa, juros;
    int diasAt;
    printf("Insira o valor da sua conta:\n");
    scanf("%lf", &conta);
    printf("Valor da conta: %.2f\n", conta);
    printf("Insira o valor da porcentagem da sua multa:\n");
    scanf("%lf", &multa);
    printf("Valor da multa: %.2f\n", multa);
    printf("Insira o valor da porcentagem dos seus juros:\n");
    scanf("%lf", &juros);
    printf("Valor dos juros: %.2f \n",juros);
    printf("Insira a quantos dias a conta está atrasada:\n");
    scanf("%d", &diasAt);
    printf("Dias Atrasados: %d\n", diasAt);
    double jurosProporcional = (juros / 100) * (diasAt / 30.0);
    multa = (multa/100)*conta ;

    if (diasAt > 0){
        double Valorconta = conta + multa +(conta*jurosProporcional); 
        printf("O valor da sua conta será de: %.2f\n", Valorconta);
    } else if(diasAt >= 45){
        printf("devido ao fato de mais de 45 dias terem passado, não há como prossegir\n");
    } else {
        double Valorconta = conta + multa; 
        printf("O valor da sua conta será de: %.2f\n", Valorconta);
    } 
    return 0;
}

