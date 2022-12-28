#include <iomanip>
#include <iostream>
#include <vector>
#include <string>
using namespace std; 

int main() {

    int n;
    cout << "Digite o tamanho do vetor de entrada: ";
    cin >> n;
    cin.ignore();
    vector<int> fila(n);
        cout << "Digite o(s) valor(es) de entrada: ";
        for (int i = 0; i < n; i++) {
            cin >> fila[i];
        }

    int m;
    cout << "Digite o tamanho do vetor de saida: ";   
    cin >> m;
    cin.ignore();
    vector<int> saida(m);
        cout << "Digite o(s) valor(es) de saida: ";
        for (int i = 0; i < m; i++) {
            cin >> saida[i];
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (saida[i] == fila[j]) {
                    //aqui eliminamos o valor do vetor caso ele seja igual o que determinamos na variavel saida
                    // Usei a função erase e begin, disponivel no site: https://cplusplus.com/reference/vector/vector/erase/  
                    // && 
                    // https://cplusplus.com/reference/vector/vector/begin/
                    fila.erase(fila.begin() + j);
                    n--;
                }
                // se a fila estiver vazia, ele imprime "Vetor vazio"
                if(fila.empty()){
                    cout << "Vetor vazio" << endl;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            cout << fila[i] << " ";
        }
    
}