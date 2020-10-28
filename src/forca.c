#include "forca.h"

#include <stdio.h>

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
