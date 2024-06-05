#include <stdio.h>
typedef struct stack *address;
typedef struct stack {
    int data[MAX];
    int count
}

stack f;
int MAX;

void push(stack s,int data){
    s->data[s->count] = data;
    ++(s->count);
}

int main(){
    printf("Masukkan nilai n: ");
    scanf(%d, &MAX);
    push(&f, 34);
    push(&f, 21);
    push(&f, 13);
    push(&f, 8);
    push(&f, 5);
    push(&f, 3);
    push(&f, 2);
    push(&f, 1);
    push(&f, 1);
    push(&f, 0);
}