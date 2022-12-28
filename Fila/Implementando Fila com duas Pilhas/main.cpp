#include <iomanip>
#include <iostream>
#include <stack>
#include <string>
#include "Queue.h"

using namespace std;

int main() {
    int qnt;
    cin >> qnt;
    Queue fila;
    for (int i = 0; i < qnt; i++) {
        int op;
        cin >> op;
        if (op == 1) {
            int x;
            cin >> x;
            fila.push_back(x);
        } else if (op == 2) {
            fila.pop_front();
        } else if (op == 3) {
            cout << fila.front() << endl;
        }
    }
    return 0;
}