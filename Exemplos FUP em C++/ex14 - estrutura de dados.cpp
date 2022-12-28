#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct alunos{
    
    int matricula;
    string nome;
    double media;

};

alunos le_alunos(){

alunos a;

    cin >> a.matricula;
    cin.ignore();
    getline(cin, a.nome);
    cin >> a.media;

return a;    
}

int main(){

    int n, id, encontrou=0;
    cin >> n;
    alunos turma[n];

    for(int i=0; i<n; i++){
        turma[i] = le_alunos();
    }

    cin >> id;

    for(int i=0; i<n; i++){
        if(id == turma[i].matricula){
            encontrou = 1;
            cout << turma[i].nome <<  "\n" << fixed << setprecision(1) << turma[i].media << endl; 
        }
    }
    if(encontrou == 0){
        cout << "NAO ENCONTRADA" << endl;
    }
        


   

}