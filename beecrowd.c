#include <stdio.h>
#include <math.h>

int main() {
   double A,B,C;
   
   scanf("%lf %lf %lf", &A, &B, &C);
   double  delta = (B*B-4*A*C);

   if(A==0 || delta<0){

    printf("Impossivel calcular\n");
    return 1;
   } else{

    double r1 = (-B - sqrt(delta)) / (2 * A);
    double r2 = (-B + sqrt(delta)) / (2 * A);
    printf("R1 = %.5f\nR2 = %.5f\n", r1, r2);
   }

    return 0;
}