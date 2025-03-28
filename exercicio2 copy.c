#include <stdio.h>
int main(){
    double s;
    printf("Digite seu salário atual: ");
    scanf("%lf", &s);
    if(s <= 2252.20){
        printf("Seu desconto será de 0%%\n");
    } else if(s > 2252.21 && s <=  2826.65){
        printf("Seu desconto será de 7,5%%\n");
    } else if(s > 2826.66 && s <=  3751.05){
        printf("Seu desconto será de 15%%\n");       
    }else if(s > 3751.06 && s <=   4664.68){
        printf("Seu desconto será de 22,5%%\n");       
    } else if(s >= 4664.69){
        printf("Seu desconto será de 27,5%%\n"); 
    }
    return 0;
}