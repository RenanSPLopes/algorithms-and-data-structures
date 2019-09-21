
#include <stdio.h>
#include <stdlib.h>

#define SIZE 30

struct agenda {
    char name[40];
    char phone[9];
};

void init(int* top){
    *top = -1;
}

int empty(int top){
    return top == -1 ? 1: 0;
}

int full(int top){
    return top == SIZE -1 ? 1 : 0;
}

int push(struct agenda p[], int *top, struct agenda x){
    if(full(*top)){
        printf("Erro - Pilha Cheia!");
        return 0;
    }

    (*top)++;
    p[*top] = x;
    return 1;
}

int pop(struct agenda p[], int* top, struct agenda *x){
    if(empty(*top)){
        printf("Erro - Pilha Vazia!");
        return 0;
    }

    *x = p[*top];
    (*top)--;
    return 1;
}

int sort(struct agenda* p, int size){
    int i, j;
    struct agenda temp;

    for(i = 1; i < size; i++){
        temp = p[i];
        j = i -1;

        while (j >= 0 && p[j].name > temp.name)
        {
            p[j+1] = p[j];
            j--;
        }

        p[j+1] = temp;

    }
}

int main(int argc, char* argv[]){
    struct agenda p[SIZE];
    int top, op = 0;
    struct agenda value;

    init(&top);

    while(op != 4){
        printf("\nMenu\n 1 - Inserir\n 2 - Excluir\n 3 - Exibir e encerrar\n 4 - Encerrar\nOpcao: ");
        scanf("%d", &op);
        setbuf(stdin, NULL);

        if(op == 1){
            printf("\nDigite o nome: ");
            gets(value.name);
            //setbuf(stdin, NULL);
            printf("\nDigite o telefone: ");
            gets(value.phone);
            setbuf(stdin, NULL);
            push(p, &top, value);

        } else if (op == 2){
            if(pop(p, &top, &value))
                printf("\nElemento removido: %s", value.name);
        } else if (op == 3) {
            struct agenda arr[SIZE];
            int i, s_size = 0;
            struct agenda value;

            while(!empty(top)){
                pop(p, &top, &value);
                arr[s_size] = value;
                s_size++;
            }

            sort(arr, s_size);

            for(i = 0; i < s_size; i++){
                printf("[%i] Name : = %s", i, arr[i].name);
                printf("[%i] Telefone : = %s", i, arr[i].phone);
                printf("\n");
            }
            break;
        }
    }

}
