/************************************************************************
 * Arquivo de implementacao da classe ForwardList
 * No final deste arquivo existem algumas funcoes que estao incompletas 
 * e voce precisa implementa-las para concluir a atividade
 ************************************************************************/
#include <vector>
#include <stdexcept>
#include <string>
#include "Node.h"
#include "ForwardList.h"

/***************************************************
 * Implementacao das funcoes-membro da classe
 ***************************************************/

ForwardList::ForwardList() {
    m_head = new Node(0, nullptr);
    m_size = 0;
}

ForwardList::ForwardList(const ForwardList& lst) {
    m_head = new Node(0, nullptr);
    m_size = lst.m_size;
    Node *lstCurrent = lst.m_head->next;
    Node *thisLast = m_head;
    while(lstCurrent != nullptr) {
        thisLast->next = new Node(lstCurrent->value, nullptr);
        lstCurrent = lstCurrent->next;
        thisLast = thisLast->next;
    }
}

bool ForwardList::empty() const {
    return m_head->next == nullptr;
}

int ForwardList::size() const {
    return m_size;
}

void ForwardList::clear() {
    while(m_head->next != nullptr) {
        Node *aux = m_head->next;
        m_head->next = aux->next;
        delete aux;
    }
    m_size = 0;
}

ForwardList::~ForwardList() {
    clear();
    delete m_head;
}

Item& ForwardList::operator[](int index) {
    int count = 0;
    Node *current = m_head->next;
    while(count < index) {
        current = current->next;
        count++;
    }
    return current->value;
}

const Item& ForwardList::operator[](int index) const {
    int count = 0;
    Node *current = m_head->next;
    while(count < index) {
        current = current->next;
        count++;
    }
    return current->value;
}

void ForwardList::insert_at(int index, const Item& val) {
    int count = 0;
    Node *current = m_head;
    while(count < index) {
        current = current->next;
        count++;
    }
    Node *newNode = new Node(val, current->next);
    current->next = newNode;
    m_size++;
}

void ForwardList::remove_at(int index) {
    int count = 0;
    Node *current = m_head;
    while(count < index) {
        current = current->next;
        count++;
    }
    Node *temp = current->next;
    current->next = temp->next;
    delete temp;
    m_size--;
}

std::string ForwardList::toString() {
    std::string str = "[ ";
    Node *ptr = m_head->next;
    while(ptr != nullptr) {
        str += std::to_string(ptr->value) + " ";
        ptr = ptr->next;
    }
    str += "]";
    return str;
}

/***********************************************************
 * Funcoes adicionais - Parte 2
 ***********************************************************/

/**
 * Concatenar a lista lst ao final da lista atual.
 */
void ForwardList::concat(ForwardList& lst) {

    Node* aux = m_head;
    while(aux->next != nullptr){
        aux = aux->next;
    }
    aux->next = lst.m_head->next;
    lst.m_head->next = nullptr;
    m_size += lst.m_size;
    lst.m_size = 0;
}

/**
 * Se o valor for encontrado, remova-o da lista e diminua o tamanho.
 */
void ForwardList::remove(const Item& val) {

    // usando duas variaveis auxiliares para o auxilio na remocao de um elemento;
    Node *atual = m_head->next;
    Node *antiga = m_head;
    while(atual != nullptr){
        if(atual->value == val){
            antiga->next = atual->next;
            delete atual;
            atual = antiga->next;
            m_size--;
        }else{
            antiga = atual;
            atual = atual->next;
        }
    }
}

/**
 * Ele cria uma nova lista e copia os valores da lista original para a nova lista.
 */
ForwardList* ForwardList::clone() {
 // Tendo como base o construtor de cópia;
 
    ForwardList* lst = new ForwardList();
    lst->m_head = new Node(0, nullptr);
    lst->m_size = m_size;
    Node *atual = m_head->next;
    Node *clone = lst->m_head;
    
    while(atual != nullptr) {
        clone->next = new Node(atual->value, nullptr);
        atual = atual->next;
        clone = clone->next;
    }
    return lst;
}

/**
 * Ele cria um novo nó para cada elemento no vetor e o anexa ao final da lista.
 */
void ForwardList::appendVector(const std::vector<Item>& vec) {
    
    Node *aux = m_head;
    while(aux->next != nullptr){
        aux = aux->next;
    }

    for(int i = 0; i < m_size; i++){
        aux->next = new Node(vec[i], nullptr);
        aux = aux->next;
        m_size++;
    }
}

/**
 * Troca o conteúdo da lista atual com o conteúdo da lista passada como argumento
 */
void ForwardList::swap(ForwardList& lst) {
    
    Node* aux = m_head;
    m_head = lst.m_head;
    lst.m_head = aux;

    int aux2 = m_size;
    m_size = lst.m_size;
    lst.m_size = aux2;
}

/**
 * Ele verifica se as duas listas são iguais comparando o tamanho das listas e, em seguida, comparando o
 * valores dos nós
 */
bool ForwardList::equals(const ForwardList& lst) const {
    
    if(m_size != lst.m_size) {
        return false;
    }
    Node* atual = m_head->next;
    Node* atual2 = lst.m_head->next;
    while(atual != nullptr) {
        if(atual->value != atual2->value) {
            return false;
        }
        atual = atual->next;
        atual2 = atual2->next;
    }
    return true;
}

/**
 * Inverte a lista.
 */
void ForwardList::reverse() { 
    // Usando tres variaveis auxiliares para o auxilio na inversao da lista;
    Node* atual = m_head->next;
    Node* anterior = nullptr;
    Node* proximo = nullptr;
    while(atual != nullptr) {
        proximo = atual->next;
        atual->next = anterior;
        anterior = atual;
        atual = proximo;
    }
    m_head->next = anterior;
}

/**
 * Ele retorna o valor do nó no índice fornecido.
 */
Item& ForwardList::get(int index) {
    
    if(index < 0 || index >= m_size) {
        throw std::range_error("index out of range");
    }
    Node* atual = m_head->next;
    for(int i = 0; i < index; i++) {
        atual = atual->next;
    }
    return atual->value;
}

const Item& ForwardList::get(int index) const {
    // fazer
    if(index < 0 || index >= m_size) {
        throw std::range_error("index out of range");
    }
    Node* atual = m_head->next;
    for(int i = 0; i < index; i++) {
        atual = atual->next;
    }
    return atual->value;
}
