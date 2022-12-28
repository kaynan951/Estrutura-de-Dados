#include <iostream>
#include <string>
#include <iostream>
using namespace std;

void hanoi(int n, int ini, int fim, int aux1, int aux2) {
    // CASO BASE == de parada
    if (n == 1) {
        cout << "Mexa o disco " << n << " do pino " << ini << " para o pino " << fim << endl;
    }
    else {
    // chamando a recursividade
        hanoi(n - 1, ini, aux1, aux2, fim);
        cout << "Mexa o disco " << n << " do pino " << ini << " para o pino " << ini << endl;
        hanoi(n - 1, aux1, fim, ini, aux2);
    }
}

int main() {
    int n;
    cout << "Digite o numero de discos: ";
    cin >> n;
    
    hanoi(n, 1, 4, 2, 3);

    return 0;
}