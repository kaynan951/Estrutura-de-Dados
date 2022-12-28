#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
    Template é um recurso que permite criar funções e classes genéricas, ou seja, que podem ser utilizadas com qualquer tipo de dado.
    Para criar uma função template, basta colocar o template antes do tipo de retorno da função, e depois colocar o tipo de dado entre < >.
    Para criar uma classe template, basta colocar o template antes da declaração da classe, e depois colocar o tipo de dado entre < >.
    Para utilizar uma função template, basta colocar o tipo de dado entre < >.
    Para utilizar uma classe template, basta colocar o tipo de dado entre < >.
*/

/*
    Função template que retorna o maior valor entre dois valores de qualquer tipo de dado.
*/
namespace UFC {
    template< typename T >
    T max(T x, T y) {
        if(x >= y) {
            return x;
        } else
            return y;
    }

/*
    Função template que imprime um vetor de qualquer tipo de dado.
*/
    template < typename N >
    void print(vector<N> &vec) {
        for(auto elemento : vec) {
            cout << elemento << " ";
        }
        cout << endl;
    }
}

int main() {
    cout << UFC::max(24, 55) << endl;
    cout << UFC::max(24.5, 55.55) << endl;
    cout << UFC::max("a", "b") << endl;

    vector <int> vec {1,2,3,4,5,6,88};
    UFC::print(vec);

}