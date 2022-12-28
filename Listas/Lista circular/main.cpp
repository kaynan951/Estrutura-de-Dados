#include <iostream>
#include "CircularList.h"
using namespace std;

// imprime todos os elementos da lista
void print(const CircularList& lst) {
    for(int i = 0; i < lst.size(); ++i) {
        // imprimir com virgula e espaço entre os elementos menos o ultimo elemento
        if(i != lst.size() - 1) {
            cout << lst[i] << ", ";
        }
        else {
            cout << lst[i];
        }
    }
    cout << endl;
}

/*
            CODIGO EXECUÇÃO
    [ "g++ *.cpp -o main; ./main" ]
*/
int main() {
    CircularList lst;

    for(int i = 1; i <= 9; ++i) {
        lst.push_back(i * 0.5);
    }
    
    cout << lst.toString() << endl;
}