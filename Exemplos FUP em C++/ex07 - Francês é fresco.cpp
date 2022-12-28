#include <bits/stdc++.h>

using namespace std;

int main(){

    string nome;

    getline(cin, nome);

    for(int i=0; i<nome.size(); i++){

        if((nome[i]==' ') && (nome[i-1] == nome[i+1])){

            i++;

        }else
           cout << nome[i];
     
    }
}