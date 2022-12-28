#ifndef QUEUE_H
#define QUEUE_H
#include <iomanip>
#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Queue { 
private:
    stack<int> pilha1;
    stack<int> pilha2;

public:
    Queue() = default;
    // Enfileirar o elemento x no final da fila.
    void push_back(int x);
    // Retirar da fila o elemento na frente da fila.
    void pop_front();
    // Mostre o elemento na frente da fila.
    int front();
};

#endif