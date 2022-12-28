#ifndef FORWARDLIST_H
#define FORWARDLIST_H
#include "node.h"
#include <sstream>
#include <iostream>

class ForwardList {
private:
    Node* m_head {nullptr};
    int m_size {0};

public:
    // constructor
    ForwardList() {
        m_head = new Node(0, nullptr);
        m_size = 0;
    }

    void push_front(int value) {
        Node* aux = new Node(value, m_head->next);
        m_head->next = aux;
        m_size++;
    }

    void push_back(int value) {
        Node* aux = m_head;
        while(aux->next != nullptr) {
            aux = aux->next;
        }
        Node *novo = new Node(value, nullptr);
        aux->next = novo;
        m_size++;
    }

    std::string toString() {
        std::stringstream ss;

        ss << "[ ";

        Node* atual = m_head->next;

        while (atual != nullptr) {
            ss << atual->value << " ";
            atual = atual->next;
        }

        ss << "]";
        return ss.str();
    }

    void clear() {
        while(m_head != nullptr) {
            Node* temp = m_head->next;
            m_head->next = temp->next;
            delete temp;
        }
        m_size = 0;
    }

    ~ForwardList() {
        clear();
        delete m_head;
    }

};

#endif