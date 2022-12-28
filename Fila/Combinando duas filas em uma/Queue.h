#ifndef QUEUE_H
#define QUEUE_H
#include <stdexcept>
#include "Node.h"

template<typename T>
class Queue {
private:
    Node<T> *m_first {nullptr}; // ponteiro para primeiro
    Node<T> *m_last {nullptr}; // ponteiro para ultimo
    int m_size {0}; // numero de elementos na fila
    
public:
    Queue() = default;
    ~Queue();
    bool empty() const;
    int size() const;
    T& front();
    const T& front() const;
    T& back();
    const T& back() const;
    void push(const T& val);
    void pop();
    Queue(const Queue& q) = delete;
    Queue& operator=(const Queue& q) = delete;
    void combina_filas(Queue& f_res, Queue& f1, Queue& f2);
};

// Destrutor
template<typename T>
Queue<T>::~Queue(){
    delete m_first;
}

// Verifica se a fila esta vazia
template<typename T>
bool Queue<T>::empty() const {
    return m_size == 0;
}

// Retorna o tamanho da fila
template<typename T>
int Queue<T>::size() const {
    return m_size;
}

// Retorna uma referencia para o primeiro elemento da fila
template<typename T>
T& Queue<T>::front() {
    if(empty())
        throw std::runtime_error("Fila vazia");
    return m_first->value;
}

// Retorna uma referencia para o primeiro elemento da fila
template<typename T>
const T& Queue<T>::front() const{
    if(empty())
        throw std::runtime_error("Fila vazia");
    return m_first->value;
}

// Retorna uma referencia para o ultimo elemento da fila
template<typename T>
T& Queue<T>::back() {
    if(empty())
        throw std::runtime_error("Fila vazia");
    return m_last->value;
}

// Retorna uma referencia para o ultimo elemento da fila
template<typename T>
const T& Queue<T>::back() const{
    if(empty())
        throw std::runtime_error("Fila vazia");
    return m_last->value;
}

// Insere um elemento no final da fila
template<typename T>
void Queue<T>::push(const T& val) {
    Node<T> *aux = new Node<T>(val, nullptr);
    if(m_size == 0){ // Fila vazia
        m_first = m_last = aux;
    }
    else { // Fila com pelo menos um elemento
        m_last->next = aux;
        m_last = aux;
    }
    m_size++;     
}

// 

template<typename T>
void Queue<T>::pop() {
    if(!empty()) {
        Node<T> *aux = m_first->next;
        m_first->next = nullptr;
        delete m_first;
        m_first = aux;
        m_size --;
    }
    if(m_size == 0) {
        m_last = nullptr;
    }
}






#endif