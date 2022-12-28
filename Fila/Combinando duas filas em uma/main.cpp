#include <iostream>
#include <sstream>
#include "Queue.h"
using namespace std;

template<typename T>
// combina duas filas em uma terceira
void Queue<T>::combina_filas(Queue& f_res, Queue& f1, Queue& f2){
    // enquanto as duas filas nao estiverem vazias
    while(!f1.empty() && !f2.empty()){
        f_res.push(f1.front());
        f_res.push(f2.front());
        f1.pop();
        f2.pop();
    }
    while (!f1.empty())
    {
        f_res.push(f1.front());
        f1.pop();
    }
    while (!f2.empty())
    {
        f_res.push(f2.front());
        f2.pop();
    }
        
}

int main() {
    Queue<int> f1; // cria fila vazia
    Queue<int> f2;
    Queue<int> f_res;

    for(int i = 1; i <= 4; i++){
        f1.push(i);
    }

    for(int j = 4; j <= 10; j++){
        f2.push(j);
    }

    f_res.combina_filas(f_res, f1, f2);

    cout << "Fila resultante: ";

    while(!f_res.empty()){
        cout << f_res.front() << " ";
        f_res.pop();
    }
    
}