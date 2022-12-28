#include <stack>
#include <vector>
#include <iostream>
using namespace std;

struct Pos{
    int l;
    int c;
};

//retorna um vetor com todos os vizinhos da posição p
vector<Pos> get_vizinhosPossiveis(Pos p){
    return {{p.l, p.c - 1}, {p.l - 1, p.c}, {p.l, p.c + 1}, {p.l + 1, p.c}};
}

int main(){
    int nl, nc;
    int l, c;
    cin >> nl >> nc;
    cin >> l >> c;
    
    char **mat = new char*[nl];
    for(int i = 0; i < nl; i++) {
        mat[i] = new char[nc];
    }
        
    for(int i = 0; i < nl; i++) {
        for(int j = 0; j < nc; j++) {
            cin >> mat[i][j];
        }
    }
    
    stack<Pos> pilha;
    pilha.push({l, c});
    
    // analisa se a posição é uma arvore, caso seja, meta-lhe fogo
    if(mat[l][c] == '#') {
        mat[l][c] = 'o';
        
        while(!pilha.empty()) { 
            Pos atual = pilha.top();
            pilha.pop();
            vector<Pos> vizinhos = get_vizinhosPossiveis(atual);
            for(Pos p : vizinhos) {
                if(p.l >= 0 && p.l < nl && p.c >= 0 && p.c < nc && mat[p.l][p.c] == '#') {
                    pilha.push(p);
                    mat[p.l][p.c] = 'o';
                }
            }
        }
    }

    // imprimindo a matriz depois o incendio 
    for(int i = 0; i < nl; i++) {
        for(int j = 0; j < nc; j++) {
            cout << mat[i][j];
        }
        cout << endl;
    }
    return 0;
}