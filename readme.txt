Como compilar com arquivo externo

gcc -c foobar.c -o foobar.o
gcc -c main.c -o main.o
gcc foobar.o main.o -o meuprograma