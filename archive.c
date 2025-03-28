#include <stdio.h>

int main(){
    int n1 = 5/2;
    double n2 = 3.144673/2;
    char l1 = 'L';
    printf("n1 = %d\n", n1);
    printf("n2 = %.2f\n", n2);
    printf("l1 = %c\n", l1);
    printf("Hello World\n");
    double n3 = 5/2;
    double n4 = 5.00/2;
    printf("n1 = %.2f e n2 = %.2f\n", n3, n4);
    int n0; 
    double n22;
    printf("Digite um valor inteiro: ");
    scanf("%d", &n0);
    printf("seu número foi: %d\n", n0);
    printf("Digite um valor real: ");
    scanf("%lf", &n22);
    printf("seu número foi: %f\n", n22);
    return 0;   
}
