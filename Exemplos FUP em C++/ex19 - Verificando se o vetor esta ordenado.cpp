#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

bool vetor(int v[], int n) {
    for(int i = 0; i < n-1; i++) {
        if(n == 1){
            return 1;
        }else if(v[i] > v[i+1]){
            return 0;
        }
    }
    return 1;
}

int main() {

    int n;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;
    int v[n];
    cout << "Digite os valores do vetor: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    if(vetor(v,n) == 0) {
        cout << "Nao ordenado" << endl;
    } else {
        cout << "Ordenado" << endl;
    }
}