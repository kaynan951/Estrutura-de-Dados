#include <iostream>
#include <iomanip>
#include <string>
#include <queue>
using namespace std;

int main() {
    queue<char> fila;
    int golA, golB;
    char time1, time2;

    // colocando as 16 letras na fila
    for (int i = 0; i < 16; i++) {
        fila.push('A' + i);
    }
    for (int i = 0; i < 15; i++) {
        cin >> golA >> golB;
        // pegando os dois primeiros e depois removendo da fila
        time1 = fila.front();
        fila.pop();
        time2 = fila.front();
        fila.pop();

        if (golA > golB) {
            // se o time 1 ganhou, ele volta para a fila
            fila.push(time1);
        }
        else {
            // se o time 2 ganhou, ele volta para a fila
            fila.push(time2);
        }
    }
    // Printa o time campeão, ou seja, o único elemento da fila
    cout << fila.front() << endl;
    return 0;
}