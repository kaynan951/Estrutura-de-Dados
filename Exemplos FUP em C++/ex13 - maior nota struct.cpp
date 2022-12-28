#include <iostream>
#include <string>
#include <iomanip>

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
    cin.ignore();
    cin >> a.matricula;
    cin.ignore();
    cin >> a.disciplina;
    cin.ignore();
    cin >> a.nota;
    cin.ignore();

    return a;    
}

void imprimir(alunos a, alunos b){

    if(a.nota > b.nota){
        cout << a.nome << " , " << fixed << setprecision(2) << a.nota;
    }else if(a.nota < b.nota){
        cout << b.nome << " , " << fixed << setprecision(2) << b.nota;
    }else
        cout << a.nome << " e " << b.nome << " , " << fixed << setprecision(2) << b.nota;
}

int main(){

   alunos b1 = le_alunos();
   alunos b2 = le_alunos();
   imprimir(b1,b2);

}