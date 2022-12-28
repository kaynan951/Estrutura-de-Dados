#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Retorna o números de ocorrências do caractere 'c' na string 'str' (com 'n' caracteres).
// Algoritmo deve ser recursivo e sem comandos de repetição.
int contaCaracteres(string str, int n, char c)
{
    if (n == 0) {
        return 0;
    } else {
        if (str[n-1] == c) {
            return 1 + contaCaracteres(str, n-1, c);
        } else {
            return contaCaracteres(str, n-1, c);
        }
    }
}

int main() 
{
    string str;
    char c;
    int n;

    cout << "Digite uma string: ";
    getline(cin, str);
    n = str.length();

    cout << "Digite um caractere: ";
    cin >> c;

    cout << "O caractere '" << c << "' aparece " << contaCaracteres(str, n, c) << " vezes na string '" << str << "'." << endl;

    return 0;
}