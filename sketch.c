#include <stdio.h>

int fatorial(int N){
    int Nfator=1;
    for(int i=N; i>0; i--){
        Nfator*=i;
    }
    return Nfator;
}

int main(){
    int N;
    scanf("%d", &N);
    int resp = fatorial(N);
    printf("%d\n", resp);
    return 0;
}