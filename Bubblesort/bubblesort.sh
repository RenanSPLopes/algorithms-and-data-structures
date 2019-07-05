#!/usr/bin/bash

echo "Compilando helper.c.."
gcc -c ../helper.c -o helper.o
echo "Compilando bubblesort.c.."
gcc -c bubblesort.c -o bubblesort.o
echo "criando programa.."
gcc ../helper bubblesort -o bubblesort.main
echo "Executando..."
./bubblesort.main