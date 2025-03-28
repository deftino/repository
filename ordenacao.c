#include <stdio.h>

int main(){

    void insercaoDireta (float v [ ], int n) {
        int i,j;
       float chave;
        for (i = 1; i <= n - 1; i++) {
        chave = v [i];
        j = i – 1;
        while (j >= 0 && v[j] > chave) {
        v[j+1] = v[j];
        j = j – 1;
        }
        v[j+1] = chave;
        }
        void selecaoDireta (float v [ ], int n) {
            int i, j, menor;
           float aux;
           for (i = 0; i < n – 1; i++) {
            menor = i;
            for (j = i + 1; j <= n - 1 ; j++) {
            if (v[j] < v[menor]) {
            menor = j;
            }
            }
            aux = v [i];
            v [i] = v [menor];
            v [menor] = aux;
            }
           }
           void bubblesort (float v [ ], int n) {
            int i, fim, pos, troca;
            float chave;
            troca = 1; fim = n - 2; pos = 0;
            while (troca == 1) {
            troca = 0;
            for (i = 0; i <= fim; i++) {
            if (v[i] > v[i+1]) {
            chave = v[i]; v[i] = v[i+1]; v[i+1] = chave;
            pos = i; troca = 1;
            }
            }
            fim = pos-1;
            }
           }
       }

}