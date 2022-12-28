#include <sstream>
#include <string>
#include "Node.h" 
#include "CircularList.h" 
using namespace std;

void CircularList::push_back(const Item& val) { 
    
    if (empty()) { // CASO 1: LISTA VAZIA
        Node* novo = new Node(val, m_head);
        m_head = novo;
        m_head->next = m_head;

    } else { // CASO 2: LISTA COM ELEMENTOS
        Node* aux = m_head;
        while(aux->next != m_head) {
            aux = aux->next;
        }
        Node* novo = new Node(val, m_head);
        aux->next = novo;    
    }
    m_size++;
}

void CircularList::pop_back() {

    // LISTA VAZIA
    if(m_head == nullptr) {
        return;
    } 

    // LISTA COM UM ELEMENTO
    if(m_head->next == m_head) {
        delete m_head;
        m_head = nullptr;
        m_size--;
    } else {

        // LISTA COM ELEMENTOS
        Node *aux = m_head;
        while(aux->next->next != m_head) {
                aux = aux->next;
        }
        delete aux->next;
        aux->next = m_head;
        m_size--;
    }
}


std::string CircularList::toString() const {
    stringstream ss;
    ss << "[ ";

    if(m_head != nullptr) {

        ss << m_head->value << " ";
        Node *aux = m_head;

        while(aux->next != m_head) {

            aux = aux->next;
            ss << aux->value << " ";
            
        }
    }
    ss << "]";
    return ss.str();
}

Item& CircularList::operator[](int index) {
    
    if(index<0 || index >= m_size) {
        std::runtime_error("Index invalido");
    }
    
    Node *aux = m_head;
    for(int i = 0; i < index; i++) {
        aux = aux->next;
    }
    return aux->value;
}

const Item& CircularList::operator[](int index) const {
    
    if(index<0 || index >= m_size) {
        std::runtime_error("Index invalido");
    }
    
    Node *aux = m_head;
    for(int i = 0; i < index; i++) {
        aux = aux->next;
    }
    return aux->value;
}

void CircularList::clear() {
    
    if(m_head != nullptr) {
        Node *aux1 = m_head->next;
        Node *aux2 = m_head->next;

        while(aux1 != m_head) {
            aux2 = aux2->next;
            delete aux1;
            aux1 = aux2;
        }
        delete m_head;
        m_head = nullptr;
        m_size = 0;

    }
}


void clearRecursivo(Node *nodeAtual, Node *head) {
    if(nodeAtual->next == head) {
        delete nodeAtual;
    } else {
        clearRecursivo(nodeAtual->next, head);
        delete nodeAtual;
    }
}

void CircularList::clear_recursivo(){
    clearRecursivo(m_head, m_head);
}
CircularList::~CircularList() {
    clear();
}

void CircularList::insert(int index, const Item& value) {
    if(index < 0 || index > m_size){
        throw std::range_error("fail: index invalido");
    }
    Node *aux = m_head;
    for(int cont = 0; cont < index-1; cont++) {
        aux = aux->next;
    }
    Node *novo = new Node(value, aux->next);
    aux->next = novo;
    m_size++;
}

void CircularList::remove(const Item& value) {
    if(m_head == nullptr) {
        return;
    }
    if(m_head->next == m_head){
        if(m_head->value == value){
            delete m_head;
            m_head = nullptr;
            m_size = 0;
        }
    }
    else {
        
    }
}


