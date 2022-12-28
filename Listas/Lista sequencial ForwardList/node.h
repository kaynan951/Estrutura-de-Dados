#ifndef NODE_H
#define NODE_H

class Node {
    friend class ForwardList;

private:
    int value;
    Node* next;

public:
    Node(int value, Node* ptrnext) {
        this-> value = value;
        this-> next = ptrnext;
    }
};

#endif 