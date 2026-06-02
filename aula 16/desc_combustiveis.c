#include <stdio.h>

int main() {
    char tipo;
    float litros, preco, desconto, total;

    printf("Digite o tipo de combustivel (A - Alcool / G - Gasolina): ");
    scanf("%c", &tipo);

    printf("Digite a quantidade de litros: ");
    scanf("%f", &litros);

    if (tipo == 'A' || tipo == 'a') {
        preco = 2.89;

        if (litros <= 20) {
            desconto = 0.03;
        } else {
            desconto = 0.05;
        }

    } else if (tipo == 'G' || tipo == 'g') {
        preco = 4.95;

        if (litros <= 20) {
            desconto = 0.04;
        } else {
            desconto = 0.06;
        }

    } else {
        printf("Tipo de combustivel invalido!\n");
        return 0;
    }

    total = litros * preco;
    total = total - (total * desconto);

    printf("Valor a pagar: R$ %.2f\n", total);

    return 0;
}