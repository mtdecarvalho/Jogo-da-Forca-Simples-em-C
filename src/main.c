#include <stdio.h>

#include "forca.h"
#include "menu.h"
#include "util.h"

int main ()
{
    char secreta[tammax], secreta2[tammax], chutes[tammax], input;
    int vida = 5, i = 0, perdeu = 1, k = 0, acabou = 0, l = 0, tam[3];

    while (l == 0) 
    {
        k = 0; vida = 5; memset(chutes, 0, strlen(chutes)); acabou = 0; l = 0;

        while(acabou!=1)
        {
            switch ( menu() )
            {
                case 1: acabou = 1; break;
                case 2: regras(); break;
                case 0: limpartela(); l = 1; acabou = 1; break;
            }
        }

        limpartela();
        
        if (l == 0)
        {
            printf("Deseja inserir a frase secreta? [s / n]\n");
            scanf(" %c", &input); limpa();
            switch (input)
            {
                case 's': case 'S':
                    //leitura de frase
                    printf("Insira a frase secreta: "); 
                    fgets(secreta, tammax, stdin); if ( strlen(secreta) == tammax-1 ) { limpa(); }
                    while ( ehvalido(secreta) != 1  )
                    {
                        memset(secreta, 0, tammax);
                        printf("Frase invalida. Tente novamente: ");
                        fgets(secreta, tammax, stdin); if ( strlen(secreta) == tammax-1 ) { limpa(); }
                    }
                    if (secreta[strlen(secreta)+1] == '\n') secreta[strlen(secreta)+1] = '\0';
                    break;
                default:
                    selecionar(secreta);
                    break;
            }
            tam[0] = strlen(secreta);
            //manipulacao da frase
            for (i = 0 ; i < tam[0] ; i++)
            {
                if ( secreta[i] >= 97 && secreta[i] <= 122 )
                    secreta[i] -= 32;
            }   strcpy(secreta2, secreta);
            tam[1] = strlen(secreta2);
            for (i = 0 ; i < tam[1] ; i ++)
            {
                if ( ( secreta2[i] >= 65 && secreta2[i] <= 90 ) || ( secreta2[i] >= 97 && secreta2[i] <= 122 ) )
                    secreta2[i] = '_';
            }

            limpartela();

            //começo de jogo
            do
            {
                //informacoes da tela
                printf("\tVidas: %d\t\tChutes: %s\n\n", vida, chutes);
                forca(vida);
                printf("\t%s\n", secreta2);
                //leitura de chute
                printf("\n\tInsira a letra: "); scanf(" %c", &input);
                limpa();    limpartela();

                //manipulaçao de chute
                if (input >= 97 && input <= 122)
                    input-=32;
                chutes[k] = input; chutes[k+1] = '\0';

                //comparaçao de chute com elementos da frase
                for (i = 0 ; i < tam[1] ; i++)
                {
                    if ( input == secreta[i] && input != secreta2[i] )
                    {    secreta2[i] = input; perdeu = 0;   }
                }

                //condiçao de erro de chute
                if (perdeu == 1)
                    vida-=1;
                
                perdeu = 1; k++;
            }
            while (vida > 0 && strcmp(secreta2, secreta) != 0);
            
            //tela de fim de jogo
            printf("\tVidas: %d\t\tChutes: %s\n\n", vida, chutes);
            forca(vida == 0 ? 0 : 6); //se vida = 0, mostra um desenho, se nao, mostra outro
            printf("\t%s\n", secreta2);
            //mensagem
            switch (vida)
            {
                case 0: printf("\n\t\tGame Over."); break;
                default:
                printf("\n\t\tVitoria!\n");
                break;
            }
            printf("\nFim de jogo.\n"); pausartela();
        }
    }
    return 0;
}
