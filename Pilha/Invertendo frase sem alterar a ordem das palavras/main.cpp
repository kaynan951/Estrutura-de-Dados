#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

/*
    Programa que Inverte uma frase, sem alterar a ordem das palavras.
    Exemplo: "O rato roeu a roupa do rei de roma" -> "O otar uoer a apuor od ier ed amor"
*/
string reverse(string line) {
    Stack<char> pilha;
    string str;
    for(int i = 0; i <= line.size(); i++) {
        if(line[i] != ' ' && line[i] != '\0') {
            pilha.push(line[i]);
        }
        else {
            while(!pilha.empty()) {
                str += pilha.top();
                pilha.pop();
            }
            str += " ";
        }
    }
    return str;
}

int main() {
    string line;
    cout << "Digite uma frase que deseja inverter suas letras: ";
    getline(cin, line);
    cout << reverse(line) << endl;
    
    return 0;
}