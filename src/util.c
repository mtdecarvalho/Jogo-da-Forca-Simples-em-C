#include "util.h"

#define tammax 100

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void limpartela()
{
    #ifdef __unix__
        system("clear");
    #elif _WIN32
        system("cls");
    #elif _WIN64
        system("cls");
    #endif
}

void pausartela()
{
    #ifdef __unix__
        system("read -r -p \"Pressione qualquer tecla...\" key");
    #elif _WIN32
        system("pause");
    #elif _WIN64
        system("pause");
    #endif
}

int ehvalido ( char a[] )
{
    int i = 0, k = 0, tam = strlen(a);
    for (i = 0 ; i < tam ; i++)
        if ( !isalpha(a[i]) )
            k++;
    if ( k == tam )
        return 0;
    else
        return 1;
}

void limpa()
{
    while ((getchar()) != '\n');
}
