#include <stdio.h>

int main() {
    int opcao;
    float U, R, I;

    printf("******************************\n");
    printf("CALCULO DE GRANDEZAS ELETRICAS\n");
    printf("******************************\n");
    printf("1. Tensao (em Volt)\n");
    printf("2. Resistencia (em Ohm)\n");
    printf("3. Corrente (em Ampere)\n");
    printf("4. Sair do programa\n");
    printf("******************************\n");
    printf("Qual grandeza deseja calcular? ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Digite a Resistencia: ");
        scanf("%f", &R);

        printf("Digite a Corrente: ");
        scanf("%f", &I);

        U = R * I;

        printf("Tensao = %.2f V\n", U);

    } else if (opcao == 2) {
        printf("Digite a Tensao: ");
        scanf("%f", &U);

        printf("Digite a Corrente: ");
        scanf("%f", &I);

        R = U / I;

        printf("Resistencia = %.2f Ohm\n", R);

    } else if (opcao == 3) {
        printf("Digite a Tensao: ");
        scanf("%f", &U);

        printf("Digite a Resistencia: ");
        scanf("%f", &R);

        I = U / R;

        printf("Corrente = %.2f A\n", I);

    } else if (opcao == 4) {
        printf("Programa encerrado.\n");

    } else {
        printf("Opcao invalida!\n");
    }

    return 0;
}