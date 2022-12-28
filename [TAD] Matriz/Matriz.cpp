// Arquivo de Implementacao do TAD Matriz
#include <iostream>
#include <iomanip>
#include "Matriz.h"
using namespace std;

// Aloca espaco dinamicamente para matriz com m linhas e n colunas
Matriz::Matriz(int m, int n) {
    this->lin = m;
    this->col = n;
    this->mat = new int*[m];
    for(int i = 0; i < m; ++i) {
        this->mat[i] = new int[n];
    }
}   

// Destrutor: Libera a memoria que foi alocada dinamicamente no construtor
Matriz::~Matriz() {
    for(int i = 0; i < this->lin; ++i) {
        delete[] this->mat[i];
    }
    delete[] this->mat;
}   

// Retorna o numero de linhas da matriz
int Matriz::linhas() {
    return this->lin;
} 

// Retorna o numero de colunas da matriz
int Matriz::colunas() { 
    return this->col;
}

// Retorna o valor da celula [i][j] da matriz
int Matriz::getValor(int i, int j) {
    return this->mat[i][j];
} 

// Atribui valor a celula [i][j] da matriz
void Matriz::setValor(int valor, int i, int j) {
    this->mat[i][j] = valor;
}

// Imprimir a matriz 
void Matriz::print() {
    for(int i = 0; i < lin; ++i) {
		for(int j = 0; j < col; ++j) {
			cout << setw(7) << mat[i][j];
		}
		cout << endl;
	}
} 

// Soma matrizes
Matriz *Matriz::soma(Matriz& B) {
    // condicao para -> somar matrizes
    //Para que a soma dê certo, as duas matrizes precisam ter as mesmas dimensões

    if(this->lin != B.linhas() || this->col != B.colunas()) {
        return nullptr;
    }
    Matriz *C = new Matriz(this->lin, this->col);
    for(int i = 0; i < this->lin; ++i) {
        for(int j = 0; j < this->col; ++j) {
            C->setValor(this->mat[i][j] + B.getValor(i, j), i, j);
        }
    }
    return C;
}

// Multiplica matrizes
Matriz *Matriz::multiplica(Matriz& B) {
    // condicao para -> multiplicar matrizes
    // Para que a multiplicação dê certo, o número de colunas da primeira matriz deve ser igual ao número de linhas da segunda.
    if(this->col != B.linhas()) {
        return nullptr;
    }
    Matriz *mult = new Matriz(this->lin, B.colunas());
    // percorrendo a matriz
    for(int i = 0; i < this->lin; ++i) {
        for(int j = 0; j < B.colunas(); ++j) {
            int soma = 0;
            for(int k = 0; k < this->col; ++k) {
                soma += this->mat[i][k] * B.getValor(k, j);
            }
            mult->setValor(soma, i, j);
        }
    }
    return mult;
}