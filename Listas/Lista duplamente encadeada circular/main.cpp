#include <iostream>
#include "list.h"
#include <vector>
using namespace std;

int main() {
    List<float> lista;

    // Inserindo elementos na lista
    for(int i = 0; i <= 9; i++) {
        lista.push_back(i);
    }

    // Imprimindo elementos da lista
    for(int i = 0; i<lista.size(); i++) {
        cout << lista[i] << " ";
    }
    cout << endl;
    
    // Imprimindo elementos da lista com iterator
    for(auto it = lista.begin(); it != lista.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}
