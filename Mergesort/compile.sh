#!/usr/bin/bash

echo "Compilando helper.c.."
gcc -c ../helper.c -o helper.o
echo "Compilando mergesort.c.."
gcc -c mergesort.c -o mergesort.o
echo "criando programa.."
gcc ../helper mergesort.o -o mergesort.main
echo "Executando..."
./mergesort.main