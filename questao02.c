#include <stdio.h>
#include <stdlib.h>

void inicializacao02(float *sBruto){
    printf("Digite o salario bruto:\n");
    scanf("%f", sBruto);
}
void processamento02(float *salBruto, float *dez, float *vinte, float *resposta){
    *dez = *salBruto * 0.9;
    *vinte = *salBruto * 0.8;

    if(*salBruto < 2000){
        *resposta = *dez;
    }else{
        *resposta = *vinte;
    }
}
void saida02(float *resp){
    printf("O salario e %.2f", *resp);
}

void questao02(void){
    //declaracao
    float salarioBruto, aDez, aVinte, resp;
    //inicializacao
    inicializacao02(&salarioBruto);
    //processamento
    processamento02(&salarioBruto,&aDez,&aVinte,&resp);
    //saida
    saida02(&resp);
}
