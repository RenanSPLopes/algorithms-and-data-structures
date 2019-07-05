#!/usr/bin/bash

echo "Compilando helper.c.."
gcc -c helper.c -o helper.o
echo "Compilando insertionsort.c.."
gcc -c insertionsort.c -o insertionsort.o
echo "criando programa.."
gcc helper insertionsort -o insertionsort.main
echo "Executando..."
./insertionsort.main