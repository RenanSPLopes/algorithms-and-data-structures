#include <stdio.h>

#define SIZE 200

void init(int* top){
    *top = -1;
}

int empty(int top){
    return top == -1 ? 1: 0;
}

int full(int top){
    return top == SIZE -1 ? 1 : 0;
}

int push(float p[], int *top, float x){
    if(full(*top)){
        printf("Erro - Pilha Cheia!");
        return 0;
    }

    (*top)++;
    p[*top] = x;
    return 1;
}

int pop(float p[], int* top, float *x){
    if(empty(*top)){
        printf("Erro - Pilha Vazia!");
        return 0;
    }

    *x = p[*top];
    (*top)--;
    return 1;
}

int sort(float* p, int size){
    int i, j;
    float temp;

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
    float p[SIZE];
    int top, op = 0;
    float value;

    init(&top);

    while(op != 4){
        printf("\nMenu\n 1 - Inserir\n 2 - Excluir\n 3 - Exibir e encerrar\n 4 - Encerrar\nOpcao: ");
        scanf("%d", &op);

        if(op == 1){
            printf("\nDigite um numero: ");
            scanf("%f", &value);
            push(p, &top, value);
        } else if (op == 2){
            if(pop(p, &top, &value))
                printf("\nElemento removido: %f", value);
        } else if (op == 3) {
            float arr[SIZE];
            int i, s_size = 0;
            float value;

            while(!empty(top)){
                pop(p, &top, &value);
                arr[s_size] = value;
                s_size++;
            }

            sort(arr, s_size);

            for(i = 0; i < s_size; i++){
                printf("[%i] = %f", i, arr[i]);
                printf("\n");
            }
            break;
        }
    }

}
