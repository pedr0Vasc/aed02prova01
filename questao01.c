#include <stdio.h>
#include <stdlib.h>

void inicializacao01(float *r){
    printf("Digite o valor do raio:\n");
    scanf("%f",r);
}
void processamento01(float *r, float *a, float *d, float *pe, float *v){
    *pe = 2*3.14**r;
    *a = *r*(*r**r);
    *d = 2 **r;
    *v = 4/3 * 3.14 * (*r**r**r);
}
void saida01(float *ar, float *di, float *per, float *vo){
    printf("O perimetro e: %.2f\nA area e:%.2f\nO diametro e: %.2f\nO volume e: %.2f", *per, *ar, *di, *vo);
}

void questao01(void){
    //declaracao
    float raio, area, diametro, perimetro, volume;
    //inicializacao
    inicializacao01(&raio);
    //processamento
    processamento01(&raio,&area,&diametro,&perimetro,&volume);
    //saida
    saida01(&area,&diametro,&perimetro,&volume);
}
