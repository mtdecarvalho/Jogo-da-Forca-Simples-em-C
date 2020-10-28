#include "menu.h"

#include "util.h"
#include <stdio.h>

int menu()
{
    int a;
    limpartela();
    printf(
            "\t\tJOGO DA FORCA\n\n"
            "\t             XXXXXX\n"
            "\t             X    X\n"
            "\t             O    X\n"
            "\t            /|\\   X\n"
            "\t            / \\   X\n"
            "\t      ____________X_\n"
            "\t     / / / / / / / /|\n"
            "\t    /_/_/_/_/_/_/_/|/\n"
            "\t    |_|_|_|_|_|_|_|/\n\n"
            "\t-----------MENU----------\n"
            "\t| 1 | Iniciar o jogo    |\n"
            "\t| 2 | Mostrar regras    |\n"
            "\t| 0 | Encerrar programa |\n"
            "\t-------------------------\n");
            scanf(" %d", &a); limpa(); return a;
}

void regras()
{
    limpartela();
    printf(
    "\t# Regras #\n\n"
    "# 1 # A forca nao faz distincao entre letras maiusculas e minusculas.\n"
    "# 2 # O tamanho maximo da frase secreta eh de 100 caracteres.\n"
    "# 3 # A frase secreta escondera apenas letras de A ate Z (acentos nao incluidos). Qualquer outro caractere sera revelado.\n"
    "# 4 # Apenas uma letra eh aceita por chute. No caso de mais de uma letra ser informada, apenas a primeira sera considerada.\n\n");
    pausartela();
}