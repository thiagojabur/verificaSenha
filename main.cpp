#include <stdio.h>
#include <string.h>
main()
{
    char login[20], senha[20];
    printf("Login: ");
    scanf("%s",login);
    printf("Senha: ");
    scanf("%s",senha);

    if (strcmp(login,"admin")==0 && strcmp(senha, "apc1")==0)
        printf("Seja bem vindo ao sistema UFCAT");
    else {
            printf("Credenciais erradas.\nDigite seu login: ");
            scanf("%s",login);
            printf("Senha: ");
            scanf("%s",senha);
             if (strcmp(login,"admin")==0 && strcmp(senha, "apc1")==0)
                printf("Seja bem vindo ao sistema UFCAT");
             else printf("Credenciais erradas, tentativas excedidas!");
    }
}
