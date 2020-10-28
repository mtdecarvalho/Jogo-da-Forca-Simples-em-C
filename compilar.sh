#! /bin/bash

mkdir obj

gcc -c src/util.c -Iinc -o obj/util.o
gcc -c src/forca.c -Iinc -o obj/forca.o
gcc -c src/menu.c -Iinc -o obj/menu.o
gcc -c src/main.c -Iinc -o obj/main.o

gcc obj/util.o obj/forca.o obj/menu.o obj/main.o -o jogo-da-forca