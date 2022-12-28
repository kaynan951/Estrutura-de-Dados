#include <bits/stdc++.h>

using namespace std;

struct alunos{
    
    string nome;
    int matricula;
    string disciplina;
    double nota;

};

alunos le_alunos(){

alunos a;

    cin >> a.nome;
    cin >> a.matricula;
    cin >> a.disciplina;
    cin >> a.nota;

    return a;    
}

void imprimir(alunos a){

    if(a.nota >= 7){
        cout << a.nome << " aprovado(a) em " << a.disciplina << endl;
    }else{
        cout << a.nome << " reprovado(a) em " << a.disciplina << endl;
    }

}

int main(){

   alunos b1 = le_alunos();
   imprimir(b1);

}