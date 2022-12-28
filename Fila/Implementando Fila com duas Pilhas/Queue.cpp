#include <iomanip>
#include <iostream>
#include <stack>
#include <string>
#include "Queue.h"

// implementar uma fila usando duas pilhas. Em seguida, processe a consultas, em que cada consulta é um dos seguintes 3 tipos:
// 1: Enfileirar o elemento x no final da fila.
// 2: Retirar da fila o elemento na frente da fila.
// 3: Mostre o elemento na frente da fila.

// Enfileirar o elemento x no final da fila.
void Queue::push_back(int x) {
    pilha1.push(x);
}

// retira o primeiro elemento da fila
void Queue::pop_front() {
    if (pilha2.empty()) {
        while (!pilha1.empty()) {
            pilha2.push(pilha1.top());
            pilha1.pop();
        }
    }
    pilha2.pop();
}

// mostra o primeiro elemento da fila
int Queue::front() {
    if (pilha2.empty()) {
        while (!pilha1.empty()) {
            pilha2.push(pilha1.top());
            pilha1.pop();
        }
    }
    return pilha2.top();
}