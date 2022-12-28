#include <iomanip>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// implementando a funcao de rotação a direita do vetor

void right_rotation(vector<int> &vet, int nrot) {
    int aux;
        for (int i = 0; i < nrot; i++) {
            aux = vet[vet.size() - 1];
            for (int j = vet.size() - 1; j > 0; j--) {
                vet[j] = vet[j - 1];
            }
            vet[0] = aux;
        }
}

void show(vector<int> &vet) {
    cout << "[ ";
    for (int value : vet)
        cout << value << " ";
    cout << "]\n";
}

int main() {
    int size, nrot;
    cout << "Digite o tamanho do vetor: ";
    cin >> size; 
    cout << "Digite o numero de rotacoes: ";
    cin >> nrot;
    vector<int> vet(size);
    cout << "Digite os valores do vetor: ";
    for (int i = 0; i < size; i++)
        cin >> vet[i];

    right_rotation(vet, nrot);
    show(vet);
}