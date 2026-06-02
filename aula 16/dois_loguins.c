#include <stdio.h>
#include <string.h>

int main() {
    char usuario[20];
    int senha;

    printf("Digite o usuario: ");
    scanf("%s", usuario);

    printf("Digite a senha: ");
    scanf("%d", &senha);

    if ((strcmp(usuario, "atila") == 0 && senha == 12345) ||
        (strcmp(usuario, "olivi") == 0 && senha == 54321)) {

        printf("Seja bem vindo!\n");

    } else {

        printf("Usuario e senha nao conferem\n");
    }

    return 0;
}
