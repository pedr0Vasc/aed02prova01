#include <stdio.h>
#include <stdlib.h>
#include "questao01.h"
#include "questao02.h"

//Instituto Federal do amazonas Manaus Zona Leste - IFAM CMZL
//Nome:Pedro Henrique Lopes Vasconcelos

int main()
{
    int menu;

    printf("Escolha uma questao (1 ou 2):\n");
    scanf("%d",&menu);

    switch(menu){
    case 1:
        questao01();
        break;
    case 2:
        questao02();
        break;
    }
}
