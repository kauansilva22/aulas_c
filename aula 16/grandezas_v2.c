// EVOLUÇÃO DO PROGRAMA GRANDEZAS.C PARA UTILIZAR FUNÇÕES E FICAR MAIS LIMPO E ORGANIZADO
#include <stdio.h>

void mostrarMenu(){
    printf("*** SISTEMA DE CALCULO DE GRANDEZAS ***\n");
    printf("** MENU DE OPCOES **\n");
    printf("1 - Calcular TENSAO\n");
    printf("2 - Calcular RESISTENCIA\n");
    printf("3 - Calcular CORRENTE\n");
    printf("4 - SAIR\n");
}

// DESAFIO: IMPLEMENTE AS FUNÇOES calcularTensao(),
// calcularResistencia() e  calcularCorrente()
// para o programa rodar igual ao original

int main(){
    int opcao;

    mostrarMenu();

    printf("\nDigite a opcao desejada: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
        calcularTensao();
        break;

        case 2:
        calcularResistencia();
        break;

        case 3:
        calcularCorrente();
        break;

        case 4:
        printf("\NFINALIZANDO PROGRAMA......");
        break;

        default:
        print("\n***OPCAO INVALIDA***");
        break;


    }


}