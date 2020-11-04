#include "menu.h"
#include "util.h"
#include <stdio.h>


#if defined(_WIN32) || defined(_WINDOWS)
#include <conio.h>
#else
#include <termios.h>

static struct termios old, current;

/* Initialize new terminal i/o settings */
void initTermios(int echo) 
{
tcgetattr(0, &old); /* grab old terminal i/o settings */
current = old; /* make new settings same as old settings */
current.c_lflag &= ~ICANON; /* disable buffered i/o */
if (echo) {
   current.c_lflag |= ECHO; /* set echo mode */
} else {
   current.c_lflag &= ~ECHO; /* set no echo mode */
}
tcsetattr(0, TCSANOW, &current); /* use these new terminal i/o settings now */
}

/* Restore old terminal i/o settings */
void resetTermios(void) 
{
tcsetattr(0, TCSANOW, &old);
}

/* Read 1 character - echo defines echo mode */
char getch_(int echo) 
{
char ch;
initTermios(echo);
ch = getchar();
resetTermios();
return ch;
}

/* Read 1 character without echo */
char getch(void) 
{
return getch_(0);
}
#endif

int lerTecla()
{
   return getch();
}

int menu()
{
   char tecla;
   int i, opc=0, opcant=-1, qtd=3, tam;
   char opcoes [][20] = {"Iniciar jogo", "Regras", "Sair"};
   do
   {
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
      "\t+----------MENU---------+\n");
      for (i = 0 ; i < 3 ; i++)
      {  
         printf("\t|");
         printf("%s %s", (opc==i)? " > ":"   ", opcoes[i]);
         tam = strlen(opcoes[i]) + 3 + 4;
         while (tam < 26)
         {   printf(" "); if (tam == 25) printf("|\n"); tam++; }
         tam = 0;
         if (i == 2) printf("\t+-----------------------+\n");
      }
      printf("      Use W e S para mover o cursor.\n");
      tecla = lerTecla(); opcant = opc;
      switch(tecla)
      {
         case 'w': case 'W': opc--;
                  if (opc<0) opc = qtd-1;
                  break; 
         case 's': case 'S': opc++;
                  if (opc>=qtd) opc = 0;
                  break; 
      }
   } while (tecla != 32);
   if (tecla == 27 || opc == qtd-1)
      return 0;
   else 
      return opc+1;
}

void regras()
{
    limpartela();
    printf(
    "\t\t# REGRAS #\n\n"
    "# 1 # A forca nao faz distincao entre letras maiusculas e minusculas.\n"
    "# 2 # O tamanho maximo da frase secreta eh de 100 caracteres.\n"
    "# 3 # A frase secreta escondera apenas letras de A ate Z (acentos nao incluidos). Qualquer outro caractere sera revelado.\n"
    "# 4 # Apenas uma letra eh aceita por chute. No caso de mais de uma letra ser informada, apenas a primeira sera considerada.\n\n");
    pausartela();
}