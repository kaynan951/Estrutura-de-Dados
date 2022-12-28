#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

/*
    função que recebe um vetor v de n inteiros e retorna a soma dos elementos de v.
    Formando um triangulo de somas
*/
int somaTriang(int n, int v[]) 
{
    if(n < 1){
        return v[0];
    }else{
        int v2[n-1];
        for(int i = 0; i < n-1; i++){
            v2[i] = v[i] + v[i+1];
        }

        somaTriang(n-1, v2);

        cout << "[";
        for(int i = 0; i < n; i++){
            if(i+1 < n){
            cout << v[i] << ", ";
            }else{
                cout << v[i];
            }
        }
        cout << "]" << endl;
    }
}

/*
    --- EXEMPLO DE ENTRADA E SAIDA: ---

    entrada:
    "Digite o tamanho do vetor: " 
    5
    1 2 3 4 5

    saída:
    [48]
    [20, 28]
    [8, 12, 16]
    [3, 5, 7, 9]
    [1, 2, 3, 4, 5]
*/

int main() {
    
    int n;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;
    int v[n];

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    somaTriang(n, v);

}