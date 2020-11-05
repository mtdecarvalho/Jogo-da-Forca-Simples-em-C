#include "forca.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void forca( int vida ) //"spritezinho" da forca
{
    switch (vida)
    {
    case 6:
    printf ("\t             XXXXXX\n"
            "\t             X    X\n"
            "\t                  X\n"
            "\t                  X\n"
            "\t                  X\n"
            "\t      ____________X_\n"
            "\t     / / / / / / / /|\t______ O\n"
            "\t    /_/_/_/_/_/_/_/|/\t_____ </V\n"
            "\t    |_|_|_|_|_|_|_|/\t______V\\ \n\n");
            break;
    case 5:
    printf ("\t             XXXXXX\n"
            "\t             X    X\n"
            "\t                  X\n"
            "\t                  X\n"
            "\t                  X\n"
            "\t      ____________X_\n"
            "\t     / / / / / / / /|\n"
            "\t    /_/_/_/_/_/_/_/|/\n"
            "\t    |_|_|_|_|_|_|_|/\n\n"
            ); break;
    case 4:
    printf ("\t             XXXXXX\n"
            "\t             X    X\n"
            "\t             O    X\n"
            "\t                  X\n"
            "\t                  X\n"
            "\t      ____________X_\n"
            "\t     / / / / / / / /|\n"
            "\t    /_/_/_/_/_/_/_/|/\n"
            "\t    |_|_|_|_|_|_|_|/\n\n"); break;
    case 3:
    printf ("\t             XXXXXX\n"
            "\t             X    X\n"
            "\t             O    X\n"
            "\t             |    X\n"
            "\t                  X\n"
            "\t      ____________X_\n"
            "\t     / / / / / / / /|\n"
            "\t    /_/_/_/_/_/_/_/|/\n"
            "\t    |_|_|_|_|_|_|_|/\n\n"); break;
    case 2:
    printf ("\t             XXXXXX\n"
            "\t             X    X\n"
            "\t             O    X\n"
            "\t            /|    X\n"
            "\t                  X\n"
            "\t      ____________X_\n"
            "\t     / / / / / / / /|\n"
            "\t    /_/_/_/_/_/_/_/|/\n"
            "\t    |_|_|_|_|_|_|_|/\n\n"); break;
    case 1:
    printf ("\t             XXXXXX\n"
            "\t             X    X\n"
            "\t             O    X\n"
            "\t            /|\\   X\n"
            "\t                  X\n"
            "\t      ____________X_\n"
            "\t     / / / / / / / /|\n"
            "\t    /_/_/_/_/_/_/_/|/\n"
            "\t    |_|_|_|_|_|_|_|/\n\n"); break;
    case 0:
    printf ("\t             XXXXXX\n"
            "\t             X    X\n"
            "\t             O    X\n"
            "\t            /|\\   X\n"
            "\t            / \\   X\n"
            "\t      ____________X_\n"
            "\t     / / / / / / / /|\n"
            "\t    /_/_/_/_/_/_/_/|/\n"
            "\t    |_|_|_|_|_|_|_|/\n\n"); break;
    }
}

char selecionar ( char a[] )
{
        char secreta[][25]=
        {"afobado","amendoim","banheiro","caatinga","cachorro","campeonato","capricornio","catapora","corrupcao","crepusculo"
        "empenhado","esparadrapo","forca","galaxia","historia","magenta","manjericao","menta","moeda","oracao","pacoca","palavra"
        "pedreiro","pneumonia","pulmao","rotatoria","serenata","transeunte","trilogia","xicara",
        "acender","afilhado","ardiloso","aspero","assombracao","asterisco","basquete","caminho","champanhe","chiclete","chuveiro"
        ,"coelho","contexto","convivencia","coracao","desalmado","eloquente","esfirra","esquerdo","excecao","fugaz","gororoba","heterossexual"
        ,"horrorizado","impacto","independencia","modernidade","oftalmologista","otorrinolaringologista","paralelepipedo","pororoca"
        ,"prognosticio","quarentena","quimera","refeicao","reportagem","sino","taciturno","tenue","visceral"
        ,"hentai","morrowind","oblivion","vivec","linux","ubuntu","debian","windows","naoto shirogane","godot","majima","yakuza"
        ,"jojo"};
        int n;
        time_t t;
        srand((unsigned) time(&t));
        n=rand()%83;
        strcpy(a, secreta[n]);
}