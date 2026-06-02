#include <stdio.h>

int main() {
    int codigo;
    float valor, desconto, valorFinal;

    printf("Digite o valor da venda: R$ ");
    scanf("%f", &valor);

    printf("\nForma de pagamento:\n");
    printf("1 - A vista (10%% de desconto)\n");
    printf("2 - Cartao de debito (5%% de desconto)\n");
    printf("3 - Cartao de credito (3%% de desconto)\n");
    printf("4 - PIX (7.5%% de desconto)\n");

    printf("\nDigite o codigo da forma de pagamento: ");
    scanf("%d", &codigo);

    if (codigo == 1) {
        desconto = valor * 0.10;
    } else if (codigo == 2) {
        desconto = valor * 0.05;
    } else if (codigo == 3) {
        desconto = valor * 0.03;
    } else if (codigo == 4) {
        desconto = valor * 0.075;
    } else {
        printf("Codigo invalido!\n");
        return 0;
    }

    valorFinal = valor - desconto;

    printf("\nValor final a pagar: R$ %.2f\n", valorFinal);

    return 0;
}