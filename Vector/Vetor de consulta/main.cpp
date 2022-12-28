#include <iomanip>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> matchingStrings(vector<string> busca, vector<string> consultas) {
    vector<int> result;
    for (int j = 0; j < busca.size(); j++) {
        int cont = 0;
        for (int i = 0; i < consultas.size(); i++) {
            if ( busca[j] == consultas[i]) {
                cont++;
            }
        }
        result.push_back(cont);
    }
    return result;
}

int main() {

    int n;
    cout << "Digite o tamanho do vetor de entrada: ";
    cin >> n;
    cin.ignore();
        vector<string> consultas(n);
        cout << "Digite o(s) valor(es) de entrada: ";
        for (int i = 0; i < n; i++) {
            cin >> consultas[i];
        }

    int m;
    cout << "Digite quantas consultas deseja fazer: ";
    cin >> m;
    cin.ignore();
        vector<string> busca(m);
        cout << "Digite o(s) valor(es) de busca: ";
        for (int i = 0; i < m; i++) {
            cin >> busca[i];
        }

    vector<int> result = matchingStrings(busca, consultas);
        for (int i = 0; i < result.size(); i++) {
            if( result[i] != 0) {
                cout << "O valor " << busca[i] << " aparece " << result[i] << " vez(es)" << endl;
            }else {
                cout << "O valor " << busca[i] << " nao aparece no vetor" << endl;
            }
        }

}