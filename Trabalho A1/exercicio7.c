#include <stdio.h>
#include <stdlib.h>

#define SIZE 50

void init(int* top){
    *top = -1;
}

int empty(int top){
    return top == -1 ? 1: 0;
}

int full(int top){
    return top == SIZE -1 ? 1 : 0;
}

int push(char p[], int *top, char x){
    if(full(*top)){
        printf("Erro - Pilha Cheia!");
        return 0;
    }

    (*top)++;
    p[*top] = x;
    return 1;
}

int pop(char p[], int* top, char *x){
    if(empty(*top)){
        printf("Erro - Pilha Vazia!");
        return 0;
    }

    *x = p[*top];
    (*top)--;
    return 1;
}

int sort(char* p, int size){
    int i, j;
    char temp;

    for(i = 1; i < size; i++){
        temp = p[i];
        j = i -1;

        while (j >= 0 && p[j] > temp)
        {
            p[j+1] = p[j];
            j--;
        }

        p[j+1] = temp;

    }
}

int main(int argc, char* argv[]){
    char p[SIZE];
    int top, op = 0;
    char value;

    init(&top);

    while(op != 4){
        printf("\nMenu\n 1 - Inserir\n 2 - Excluir\n 3 - Exibir e encerrar\n 4 - Encerrar\nOpcao: ");
        scanf("%d", &op);

        if(op == 1){
            printf("\nDigite um caracter: ");
            scanf(" %c", &value);
            push(p, &top, value);
        } else if (op == 2){
            if(pop(p, &top, &value))
                printf("\nElemento removido: %c", value);
        } else if (op == 3) {
            char arr[SIZE];
            int i, s_size = 0;
            char value;

            while(!empty(top)){
                pop(p, &top, &value);
                arr[s_size] = value;
                s_size++;
            }

            sort(arr, s_size);

            for(i = 0; i < s_size; i++){
                printf("[%i] = %c", i, arr[i]);
                printf("\n");
            }
            break;
        }
    }

}
